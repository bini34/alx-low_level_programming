/**
 * swap_int - Swaps the values of two integers using two input pointers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
