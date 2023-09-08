#include <stdio.h>

/**
 * main - output combinations of single digit-numbers
 * Return: return 0 and exit program
 */
int main(void)
{
	int is;

	is = '0';
	while (is <= '9')
	{
		putchar(is);
	if (is != '9')
	{
		putchar(',');
		putchar(' ');
	}
		is++;
	}
	putchar('\n');
	return (0);
}
