/**
 * _puts - Prints a string to the standard output, followed by a newline.
 *
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
