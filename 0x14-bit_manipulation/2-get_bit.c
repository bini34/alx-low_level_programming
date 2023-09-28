#include "main.h"
/**
 * get_bit - gets a bit at a given index
 *
 * @n: decimal value
 * @index: integer value of bit position
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	else
	{
		unsigned long int shifted = n >> index;
		int bit_value = shifted & 1;

		return (bit_value);
	}
}

