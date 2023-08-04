#include "main.h"
/**
 * main - program that prints its name
 * @ac: argument counter
 * @av: argument variable
 * Return: return 0
 */
int main(int ac, char *av[])
{
	int i;
	int mul = 1;

	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < ac; i++)
	{
		mul *= atoi(av[i]);
	}
	printf("%d\n", mul);

	return (0);
}

