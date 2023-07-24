#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a string that reverse
 */
void rev_string(char *s)
{
	int len = strlen(s), i, j;
	char temp;

	for (i = 0, j = len - 1; i < j ; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
