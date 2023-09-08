#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - display  "Programming is like building a multilingual puzzle"
 * Return: 0 and exit the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
