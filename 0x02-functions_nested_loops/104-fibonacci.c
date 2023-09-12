#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n1 = 1, n2 = 2, next;

	printf("%lu, %lu", n1, n2);

	for (int i = 2; i < 98; i++)
	{
	next = n1 + n2;
	printf(", %lu", next);
	n1 = n2;
	n2 = next;
	}
	printf("\n");
	return (0);
}
