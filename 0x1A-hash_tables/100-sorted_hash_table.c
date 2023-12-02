#include "hash_tables.h"
/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table,
 *	or NULL if an error occurred
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
/**
 * shash_table_set - Set a key-value pair in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value to set for the key
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	while (current != NULL && strcmp(current->key, key) < 0)
	{
		current = current->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (current == NULL)
	{
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		if (ht->stail != NULL)
			ht->stail->snext = new_node;
		ht->stail = new_node;
		if (ht->shead == NULL)
			ht->shead = new_node;
	}
	else
	{
		new_node->snext = current;
		new_node->sprev = current->sprev;
		if (current->sprev != NULL)
			current->sprev->snext = new_node;
		current->sprev = new_node;
		if (ht->shead == current)
			ht->shead = new_node;
	}
	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with a key in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to look up
 *
 * Return: The value associated with the key, or NULL if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}

