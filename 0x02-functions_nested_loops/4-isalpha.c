#include "main.h"
/**
 * _isalpha - function to determine if
 *            a character is in alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if `c` is alphabet,
 *         otherwise 0 (success)
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
