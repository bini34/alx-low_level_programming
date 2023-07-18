#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0;
 */
void times_table(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			z = i * j;
			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z/10) + '0');
			_putchar((z % 10) + '0');

		}
		_putchar('\n');
	}
}

