#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf(separator);
	}
	printf("\n");
	va_end(args);
}
