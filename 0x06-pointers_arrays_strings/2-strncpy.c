#include "main.h"
/**
 * _strncpy - a function that  copies strings
 *
 * @dest: the string will be append to
 * @src: the string will be from
 * @n: number of copies
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
