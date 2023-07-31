#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a string that
 * @c: first occurrence of the character
 *
 * Return: a pointer to the first occurrence of the character c in
 *			the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *f = s;

	return (strchr(f, c));
}
