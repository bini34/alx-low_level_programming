#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenate two string if fail return NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i = 0;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);

	s3 = (char *)malloc(len1 + len2 + 1);
	if (s3 == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		s3[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		s3[i] = *s2;
		s2++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
