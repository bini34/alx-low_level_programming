#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in
 *		a linked dlistint_t list.
 *
 * @h: head pointer
 * Return: returns the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
