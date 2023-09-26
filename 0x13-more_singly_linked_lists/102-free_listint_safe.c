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
		listint_t *slow = *h;
		listint_t *fast = *h;
		listint_t *temp;

		while (slow != NULL && fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;

        if (slow == fast)
            break;
		}

		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				temp = fast->next;
				free(fast);
				fast = temp;
				count++;
			}
			while (fast != slow)
			{
				temp = slow->next;
				free(slow);
				slow = temp;
				count++;
			}
			free(slow);
			count++;
		}
		else
		{
			while (*h != NULL)
			{
				temp = (*h)->next;
				free(*h);
				*h = temp;
				count++;
			}
		}
		*h = NULL;
		return (count);
}

