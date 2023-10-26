#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: Pointer
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bit - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			printed = 1;
		}
		else  if (printed == 1)
		{
			_putchar('0');
		}
	}
}
