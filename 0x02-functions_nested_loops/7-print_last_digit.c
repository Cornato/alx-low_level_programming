#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @a: Type int a and @c type int b
 *
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int c;

	if (a < 0)
	{
		c = -1 * (a % 10);
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = a % 10;
		_putchar(c + '0');
		return (c);
	}
}
