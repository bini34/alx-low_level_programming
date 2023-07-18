#include "main.h"
/**
 * _islower - function to determine if
 *            a character is in lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 if `c` is lowercase,
 *         otherwise 0 (success)
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
