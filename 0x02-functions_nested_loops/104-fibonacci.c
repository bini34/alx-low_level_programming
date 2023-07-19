#include"main.h"
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, x = 1, y = 2, z;

	printf("%d, %d, ", x, y);
	for (i = 1; i <= 96; i++)
	{
		z = x + y;
		printf(", %d", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
