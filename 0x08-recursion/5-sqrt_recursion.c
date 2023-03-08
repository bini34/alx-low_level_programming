#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - helper function to find the square root of a number
 * @n: number to be used
 * @start: starting value for binary search
 * @end: ending value for binary search
 *
 * Return: the square root of n, or -1 if it does not exist
 */

int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
		return (mid);
	else if (square > n)
		return (_sqrt_helper(n, start, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, end));
}
