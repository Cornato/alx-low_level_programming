#include <stdio.h>

/**
 * main - output all combination of two digit-numbers
 * Return: return 0 and exit
 */
int main(void)
{
	int n11, n22;

	for (n11 = 0; n11 <= 99; n11++)
	{
		for (n22 = 0; n22 <= 99; n22++)
		{
			if (n11 < n22 && n11 != n22)
			{
				putchar((n11 / 10) + '0');
				putchar((n11 % 10) + '0');
				putchar(' ');
				putchar((n22 / 10) + '0');
				putchar((n22 % 10) + '0');
				if (n11 != 98 || n22 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
