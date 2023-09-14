#include "main.h"
/**
 * print_most_numbers - Print
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i != 4 && i != 2)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
