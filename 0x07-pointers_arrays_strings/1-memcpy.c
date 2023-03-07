/**
 * _memcpy - Fills memory with a constant byte
 * @dest: Pointer where  copy to
 * @src: pointer where copy from
 * @n: The number of bytes to be filled starting from n
 *
 * Return: Pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

