#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	int t = n, d = 1, num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (t != 0)
	{
		d *= 10;
		t /= 10;
	}
	d /= 10;
	while (d != 0)
	{
		num = n / d;
		n %= d;
		d /= 10;
		_putchar(num + '0');
	}
}

