#include "function_pointers.h"
/**
 * print_name -  function that prints a name.
 * @name: a name
 * @f: afunction
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
