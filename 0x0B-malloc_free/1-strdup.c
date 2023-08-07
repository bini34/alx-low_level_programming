#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly
 *		allocated space in memory, which contains a copy of
 *		the string given as a parameter.
 * @str: a string
 * Return: returns new string
 */
char *_strdup(char *str)
{
	int len;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	new_str = (char *)malloc(len + 1);

	if (new_str != NULL)
		strcpy(new_str, str);
	return (new_str);
}
