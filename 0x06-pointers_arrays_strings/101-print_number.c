#include "main.h"
/**
 * print_number - print_number
 * @n: pointer.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
