#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: a string
 * @accept: a string of char
 * Return: a pointer to the byte in s that matches one of the bytes
 *			in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
