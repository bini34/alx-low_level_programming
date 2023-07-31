#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a memory area copies too
 * @src: a memory area copies from
 * @n: number of bites it copies
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
