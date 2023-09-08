#include <stdio.h>

/**
 * main - output numbers from 0 to 9
 * Return: return 0 and exit the program.
 */
int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
		printf("%d", counter);
	printf("\n");
	return (0);
}
