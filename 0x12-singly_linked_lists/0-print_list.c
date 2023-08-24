#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tempo = h;

	while (tempo != NULL)
	{
		if (tempo->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)tempo->len, tempo->str);
		i++;
		tempo = tempo->next;
	}
	return (i);
}
