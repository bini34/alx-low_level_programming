/**
 * rev_string - Reverses a given string.
 *
 * @s: The string to be reversed.
 *
 * Return:Nothing
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (j = 0; j < 1 / 2; ++j)
	{
		ch = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = ch;
	}
}
