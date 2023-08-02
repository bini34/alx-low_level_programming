#include "main.h"

/**
 * _sqrt_recursive - A helper function that calculates the square
 *					root of a number using binary search.
 * @n: The number whose square root is to be calculated.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 * Return: The square root of the number if it has
 *			a natural square root, otherwise -1.
 */
int _sqrt_recursive(int n, int start, int end)
{
	int mid = start + (end - start) / 2;

	if (mid * mid == n)
		return (mid);
	if (start >= end)
		return (-1);
	if (mid * mid < n)
		return (_sqrt_recursive(n, mid + 1, end));
	return (_sqrt_recursive(n, start, mid - 1));
}
/**
 * _sqrt_recursion -  a function that returns the natural
 *						square root of a number.
 *
 * @n: a number
 * Return: returns the natural square root of a number If n does not
 *			have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 1, n));
}
