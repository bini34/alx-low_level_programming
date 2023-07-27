#include "main.h"
/**
 * leet -  encode into 1337speak
 * @str: input value
 * Return: n value`:wq
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = "a,A,e,E,o,O,t,T,i,I";
	char repletter[] = "4,4,3,3,0,0,7,7,1,1";

	for (i = 0 ; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
				str[i] = repletter[j];
		}
	}
	return (str);
}
