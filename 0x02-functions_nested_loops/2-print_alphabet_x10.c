#include "main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
