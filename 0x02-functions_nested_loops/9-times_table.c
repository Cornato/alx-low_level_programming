#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int Time1;
	int Time2;
	int Result;

	for (Time1 = 0; Time1 < 10; Time1++)
	{
	for (Time2 = 0; Time2 < 10; Time2++)
	{
	Result = Time1 * Time2;

	if (Result > 9)
	{
	_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
	}
	else if (Time2 != 0)
	{
	_putchar(' ');
	_putchar(Result + '0');
	}
	else
	{
	_putchar(Result + '0');
	}
	if (Time2 != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
