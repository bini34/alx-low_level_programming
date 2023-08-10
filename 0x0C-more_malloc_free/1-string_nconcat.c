#include "main.h"
/**
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
