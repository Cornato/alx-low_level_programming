#include "main.h"

/**
 * _puts - to swap value
 * @str: pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
