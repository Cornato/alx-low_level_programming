#include "main.h"
/**
 * print_times_table - Print n times table starting with 0
 * Description: If n is greater than 15 or less than 0 print nothing
 * @n: type number
 */
void print_times_table(int n)
{
	int num1, num2, Result;

	if (n > 15 || n < 0)
		return;
	while (num1 <= n)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			Result = num1 * num2;
			if (Result > 99)
			{
				_putchar(Result / 100 + '0');
				_putchar((Result / 10 % 10) + '0');
				_putchar(Result % 10 + '0');
			}
			else if (Result > 9)
			{
				_putchar(' ');
				_putchar(Result / 10 + '0');
				_putchar(Result % 10 + '0');
			}
			else if (num2 != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(Result + '0');
			}
			else
				_putchar(Result + '0');

			if (num2 != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		num1++;
	}
}
