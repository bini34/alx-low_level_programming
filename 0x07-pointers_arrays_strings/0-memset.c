/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to be used to fill the memory area
 * @n: The number of bytes to be filled starting from s
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
		p[i] = b;

	return (s);
}

