#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two
 *				diagonals of a square matrix of integers.
 *
 * @a: 2d array
 * @size: size of 1d array
 */
void print_diagsums(int *a, int size)
{
	int i, sumDig1 = 0, sumDig2 = 0;

	for (i = 0; i < size; i++)
	{
		sumDig1 += a[i * size + i];
		sumDig2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sumDig1, sumDig2);
}
