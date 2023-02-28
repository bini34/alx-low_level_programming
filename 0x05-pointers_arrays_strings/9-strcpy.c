/**
 * _strcpy - copies a string from one pointer to anothe
 * along with the terminating null byte (\0)
 *
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 *
 * Return: pointer to the destination string
*/

char *_strcpy(char *dest, const char *src)
{
	int src_idx, dest_idx = 0;

	for (src_idx = 0; src[src_idx] != '\0'; src_idx++)
	{
		dest[dest_idx] = src[src_idx];
		dest_idx++;
	}

	dest[dest_idx] = '\0';

	return (dest);
}
