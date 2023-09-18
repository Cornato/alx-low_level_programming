#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - test
 * Return: 0
 */
int main()
{
	int Value;
	char Letters;

	srand(time(NULL));
	while (Value <= 2772)
	{
		Letters = rand() % 72;
		Value += Letters;
		putchar(Letters);
	}
	putchar(2772 - Value);
	return (0);
}