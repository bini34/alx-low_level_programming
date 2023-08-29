#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 *					in a linked listint_t list.
 * @h: head pointer
 * Return: the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *c;

	c = h;
	while (c != NULL)
	{
		n++;
		c = c->next;
	}
	return (n);
}
