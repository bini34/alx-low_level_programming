#include"main.h"

/**
 * func :print 0 - 9
 *             by  using _putchar 
 *
 * Return: return 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}
