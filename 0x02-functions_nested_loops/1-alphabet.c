#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
