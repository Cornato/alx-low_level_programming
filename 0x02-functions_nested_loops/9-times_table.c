#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
	for (int b = 0; b < 10; b++)
	{
	int c = i * b;

	if (c > 9)
	{
	_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
	}
	else if (b != 0)
	{
	_putchar(' ');
	_putchar(c + '0');
	}
	else
	{
	_putchar(c + '0');
	}
	if (b != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
