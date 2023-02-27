/**
 * _strlen - Returns the length of a string.
 *
 * @s: Input string parameter.
 *
 * Return: Length of the input string.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
		++c;

	return (c);
}
