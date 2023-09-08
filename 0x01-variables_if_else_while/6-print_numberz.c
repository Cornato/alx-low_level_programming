#include <stdio.h>

/**
 * main - output all numbers
 * Return: return 0 and exit the program.
 */
int main(void)
{
	int Counter;

	for (Counter = 0; Counter < 10; Counter++)
		putchar(Counter + '0');
	putchar('\n');
	return (0);
}
