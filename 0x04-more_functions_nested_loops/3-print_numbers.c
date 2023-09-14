#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Print
 *
 * Return: 0
 */
void print_numbers(void)
{
	int m = 0;

	while (m <= 9)
	{
		_putchar('0' + m);
		m++;
	}
	_putchar('\n');
}
