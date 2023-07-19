#include"main.h"
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 1, y = 2, z, sum = 0;

	while (x <= 4000000)
	{
		if (x % 2 == 0)
			sum += x;
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d\n", sum);
	return (0);
}
