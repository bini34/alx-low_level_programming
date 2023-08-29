#include "lists.h"
/**
 * reverse_listint- Returns: a pointer to the first node of the reversed list
 *
 * @head: pointer to the first node of the list
 *
 * Return:-first node pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (*head == NULL)
		return (NULL);

	first = *head;
	rest = first->next;


	if (rest == NULL)
		return (first);

	reverse_listint(&rest);
	first->next->next = first;
	first->next = NULL;

	*head = rest;

	return (rest);
}
