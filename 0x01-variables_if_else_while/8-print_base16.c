#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}

