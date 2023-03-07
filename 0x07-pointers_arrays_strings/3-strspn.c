/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = s;
	int matched = 0;

	while (*p)
	{
		matched = 0;

		while (*accept)
		{
			if (*p == *accept)
			{
				matched = 1;
				break;
			}
			accept++;
		}
		if (!matched)
		{
			break;
		}
		len++;
	p++;
	}

	return (len);
}

