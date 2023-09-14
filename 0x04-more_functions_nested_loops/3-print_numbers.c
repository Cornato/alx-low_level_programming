#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
