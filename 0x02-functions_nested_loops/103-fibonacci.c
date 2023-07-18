#include"main.h"
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, x = 1, y = 2, z, sum = 0;

	for (i = 1; i <= 4000000 ; i++)
	{
		z = x + y;
		if ((z % 2) == 0)
			sum += z;
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}
