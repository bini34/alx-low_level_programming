#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: the string will be append to
 * @src: the string will be from
 * @n: the number byte
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
