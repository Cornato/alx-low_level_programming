#include <stdio.h>
/**
 * main - 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 0;
	long Sum;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
			num3 += num2;

		Sum = num2;
		num2 += num1;
		num1 = Sum;
			
	}
	printf("%d\n", num3);
	return (0);
}
