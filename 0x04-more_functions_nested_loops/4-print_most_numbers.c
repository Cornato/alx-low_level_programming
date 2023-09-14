#include "main.h"
/**
 * print_most_numbers - Print
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = '0';

	do {
	if (i != '4' && i != '2')
	{
	_putchar(i);
	}
	i++;
	} while (i <= '9');
	_putchar('\n');
}
