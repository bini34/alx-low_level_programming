#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it.
 * @ac: argument counter
 * @av: argument variable
 * Return: return 0
 */
int main(int ac, char *av[])
{
	(void)av;

	ac--;
	printf("%d\n", ac);
	return (0);
}

