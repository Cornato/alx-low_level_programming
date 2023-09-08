#include <stdio.h>

/**
 * main - output number of base16 in lowercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	int is;
	char as[16] = "0123456789abcdef";
	char bs;

	is = 0;
	while (is < 16)
	{
		bs = as[is];
		putchar(bs);
		is++;
	}
	putchar('\n');
	return (0);
}
