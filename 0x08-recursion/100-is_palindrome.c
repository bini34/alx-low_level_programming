/**
 * is_palindrome - a functiction check if a string is a palindrome
 *
 * @s: string
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
