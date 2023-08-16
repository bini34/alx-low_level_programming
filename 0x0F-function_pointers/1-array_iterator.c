#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as
 *		a parameter on each element of an array
 * @array: array pointr
 * @size: size of array
 * @action: a function_pointers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
