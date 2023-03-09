#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);


	for (i = 1; i <= n; i++)
	{
		if (i == n)
			return (i);
		if (i > n)
			return (-1);
	}
	return (-1);
}
