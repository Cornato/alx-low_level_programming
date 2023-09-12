#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @a: Type int
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	if (a < 0)
		return (_putchar(-1 * (a % 10) + '0'));
	else
		return (_putchar(a % 10 + '0'));
}
