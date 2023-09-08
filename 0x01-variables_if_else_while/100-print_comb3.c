#include <stdio.h>

/**
 * main - output differente combination
 * Return: return 0 and exit program
 */
int main(void)
{
	int num11 = '0';
	int num22 = '0';

	while (num11 <= '9')
	{
		while (num22 <= '9')
		{
			if (!(num11 > num22 || num11 == num22))
			{
				putchar(num11);
				putchar(num22);
				if (num11 == '8' && num22 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num22++;
		}
		num22 = '0';
		num11++;
	}
	return (0);
}
