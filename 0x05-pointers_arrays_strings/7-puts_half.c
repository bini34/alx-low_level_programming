#include"main.h"
#include<string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;

	if (length % 2 == 1)
	{
		start = (length - 1) / 2;
	}
	int i;

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
