#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints a quote to the standard error.
 *
 * Return: Always 1 (Error).
 */
int main(void)
{
	char *p = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, p, 59);
	return(1);
}
