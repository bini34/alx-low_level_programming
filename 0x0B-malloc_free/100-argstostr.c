#include <stdlib.h>
#include <string.h>
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
	int total_len = 0, index = 0, i, j;
	char *str;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;

	str = (char *)malloc(total_len * sizeof(char));
	if (!str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';

	return (str);
}
