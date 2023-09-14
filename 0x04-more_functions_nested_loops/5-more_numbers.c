#include "main.h"
/**
 * more_numbers - return num without 2,4
 *
 * Return: Always
 */
void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
			if (b <= 14)
			{
				_putchar('0' + b % 10);
			}
		}
		_putchar('\n');
	}
}
