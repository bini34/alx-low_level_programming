#include "hash_tables.h"
/**
 * key_index - Computes the index for a key in a hash table array.
 * @key: The key for which to calculate the index.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}

