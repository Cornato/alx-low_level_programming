#include "main.h"
/**
 * print_diagonal - test
 * @n: variable
 * Return: ss
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, s;

		for (i = 0; i < n; i++)//1
		{
			for (s = 0; s < i; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
