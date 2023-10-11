#include "function_pointers.h"
/**
 * print_name - name
 * @name: char pointer
 * @f: char arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	f(name);
}
