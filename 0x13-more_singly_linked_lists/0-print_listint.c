#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t numNodes = 0;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		numNodes++;
	}
	return (numNodes);
}
