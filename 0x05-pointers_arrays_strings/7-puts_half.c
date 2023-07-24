#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 *		followed by a new line
 *
 * @str: a string that will be printed
 */
void puts_half(char *str)
{
	int len = strlen(str), i;

	for (i = ((len - 1) / 2) + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
