#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 *		starting with the first character, followed by a new line.
 *
 * @str: a string that prints
 */
void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
}
