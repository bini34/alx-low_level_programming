#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a
 *		dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *th = h;
	ssize_t n = 0;

	while (th->next != NULL)
	{
		printf("%d\n", th->n);
		th = th->next;
		n++;
	}
	printf("%d\n", th->n);
	n++;
	return (n);
}
