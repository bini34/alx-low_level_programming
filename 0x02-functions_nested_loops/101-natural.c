#include "main.h"
/**
 * main - Entry point it will be excution first
 *
 * Description: a program prints the sum of all the
 *		multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = +i;
	}
	printf("%d\n", sum);
	return (0);
}
