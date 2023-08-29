#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 *					linked list
 * @head: pointer to a pointer to the head of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
