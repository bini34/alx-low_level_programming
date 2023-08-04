#include "main.h"
/**
 * main -  a program that prints the minimum number of coins to
 *			make change for an amount of money.
 * @ac: argument counter
 * @av: argument variable
 * Return: return 0 if have a error it return 1
 */
int main(int ac, char *av[])
{
	int i, cent, change = 0, centlist[] = {25, 10, 5, 2, 1};

	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(av[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cent >= centlist[i])
		{
			cent -= centlist[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}


