#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: a charcter that check
 * Return: Return 1  if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
