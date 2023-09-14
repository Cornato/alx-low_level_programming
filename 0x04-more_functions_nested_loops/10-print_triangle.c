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

		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size - i; s++)
			{
				_putchar(' ');
			}
			for (s = 0; s < i; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
