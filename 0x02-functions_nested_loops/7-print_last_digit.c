#include "main.h"
/**
 * print_last_digit - a function that prints the last
 *			digit of a number
 * @n: a number that use
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar('0' + x);
	return (x);
}
