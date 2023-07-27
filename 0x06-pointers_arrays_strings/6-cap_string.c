#include "main.h"
/**
 * cap_string -  a function that capitalizes all words of a string
 * @str: a string that will be capitalize
 * Return: return a capitalize string
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str == ',' || *str == ';' || *str == '.' ||
				*str == '!' || *str == '?' || *str == '"' ||
				*str == '(' || *str == ')' || *str == '{' ||
				*str == '}' || *str == ' ' || *str == '\n'
				|| *str == '\t')
		{
			str++;
			if (isalpha(*str))
			{
				*str = toupper(*str);
			}
			else
			{
				str++;
				*str = toupper(*str);
			}
		}
		str++;
	}
return (ptr);
}
