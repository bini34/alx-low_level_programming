#include "main.h"
/**
 * _isdigits - a function that check is digit or not
 * @str: a char that check
 * Return: return 1 if digit or return 0 if not digit
 */
int _isdigits(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return 0;
    }
    return 1;
}
/**
 * main - a program that adds positive numbers.
 * @ac: argument counter
 * @av: argument variable
 * Return: return 0
 */
int main(int ac, char *av[])
{
	int i;
	int sum = 0;

	for (i = 1; i < ac; i++)
	{
		if (_isdigits(av[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(av[i]);
	}
	printf("%d\n", sum);

	return (0);
}


