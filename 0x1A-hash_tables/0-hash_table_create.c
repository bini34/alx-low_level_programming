#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: The size of the array in the hash table
 *
 * Return: A pointer to the newly created hash table,
 *	or NULL if an error occurred
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}