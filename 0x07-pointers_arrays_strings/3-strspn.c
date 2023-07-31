#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a string that we will check
 * @accept:  consist only of bytes from
 *
 * Return:the number of bytes in the initial segment of s which
 *			consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

