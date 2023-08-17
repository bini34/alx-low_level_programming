#include "variadic_functions.h"
/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int x, sum = 0;
	size_t i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);
	return (sum);
}
