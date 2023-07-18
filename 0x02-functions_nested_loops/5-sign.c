#include "main.h"
/**
 * print_sign - function to determine if
 *            a number is posetive or negative or zero
 *
 * @n: character to be checked
 *
 * Return: 1 if 'n' is greater than zero ,
 * 		-1 if 'n'  is less than zero,
 *         otherwise 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
