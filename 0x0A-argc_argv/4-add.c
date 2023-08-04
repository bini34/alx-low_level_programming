#include "main.h"
#include <stdio.h>
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
		if (isdigit(*av[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(av[i]);
	}
	printf("%d\n", sum);

	return (0);
}


