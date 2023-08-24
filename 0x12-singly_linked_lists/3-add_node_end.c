#include "lists.h"
/**
 * add_node -  a function that adds a new node at the
 *				end of a list_t list
 * @head: pointer the first node
 * @str: a string that will be add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*new, *current;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	current = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}

