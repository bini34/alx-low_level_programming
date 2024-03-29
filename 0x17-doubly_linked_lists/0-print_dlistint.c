#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a
 *		dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	ssize_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
