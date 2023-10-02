#include "main.h"
#include <string.h>

/**
 * print_rev - to rev value
 * @s: pointer
 */
void print_rev(char *s)
{
	s = "jana";
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
