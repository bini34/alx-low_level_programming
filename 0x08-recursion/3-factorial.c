/**
 * factorial - a function that calculates the factorial of a positive integer
 *
 * @n: positive integer to calculate factorial of
 *
 * Return: the factorial of @n, or -1 if @n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
