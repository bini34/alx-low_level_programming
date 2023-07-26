#include "main.h"
/**
 * string_toupper -  a function that changes all lowercase letters
 *			of a string to uppercase.
 * @a: a array that will change
 * Return: return charcter
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
