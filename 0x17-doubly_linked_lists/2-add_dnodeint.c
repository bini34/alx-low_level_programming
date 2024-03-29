#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of
 *		a dlistint_t list.
 * @head: head pointer first linked list
 * @n: int that input
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
