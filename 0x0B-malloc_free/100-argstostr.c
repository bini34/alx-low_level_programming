#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: The number of arguments passed to the program
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to the new string containing the concatenated arguments,
 *	or NULL if ac == 0 or av == NULL, or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, index = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_len += 1 + strlen(av[i]);
	}
	ptr = (char *) malloc(total_len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[index] = av[i][j];
			index++;
		}
		ptr[index] = '\n';
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
