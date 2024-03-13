#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the value index else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (begin <= end)
	{
		print_array(&array[begin], end - begin + 1);
		mid = (begin + end) / 2;

		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] < value)
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
