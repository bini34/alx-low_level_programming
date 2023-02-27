/**
 * swap_int - swaps the values of two integers
 *		using two input pointers
 *
 * @a: pointer the first integer
 * @b: pointer to the second integer
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
