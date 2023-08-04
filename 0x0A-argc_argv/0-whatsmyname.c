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

	for (i = 0; i < ac; i++)
	{
	printf(av[i]);
	}
	return (0);
}
