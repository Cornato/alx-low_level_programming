#include "main.h"
/**
 * print_triangle - test
 * @size: variable
 * Return: ss
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, s;

		for (i = 1; i <= size; i++)
		{
			for (s = 1; s <= size - i; s++)
			{
				_putchar(' ');
			}
			for (s = 1; s <= i; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
