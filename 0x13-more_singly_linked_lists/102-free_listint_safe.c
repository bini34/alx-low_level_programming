#include "lists.h"

/**
 * free_listint_safe-This function can free lists with a loop
 *
 * @h: pointer to the first node
 *
 * Return: Returns: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		current = next;
	}

	*h = NULL;

	return (count);
}

