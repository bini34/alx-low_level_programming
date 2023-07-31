#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s:	area pointed
 * @b:	the constant byte
 * @n:	bytes of the memory
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
