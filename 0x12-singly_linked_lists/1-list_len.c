#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: The head of the linked list
 *
 * Return: The number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
