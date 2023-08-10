#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, n);
	ptr[len1 + n] = '\0';
	return (ptr);
}
