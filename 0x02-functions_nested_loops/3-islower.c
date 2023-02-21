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
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

