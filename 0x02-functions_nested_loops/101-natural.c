#include <stdio.h>
/**
 * main - EntryPoints
 *
 * Return: 0
 */
int main(void)
{
	int Counter;
	int sum;

		for (Counter = 0; Counter < 1024; Counter++)
		{
			if ((Counter % 3 == 0) || (Counter % 5 == 0))
				sum = sum + Counter;
		}
		printf("%d\n", sum);
		return (0);
}