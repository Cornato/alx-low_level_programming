#include <stdio.h>
/**
 * main - 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	int num1, num2, Sum, Contuer;

	num1 = 0;
	num2 = 1;
	for (Contuer = 0; Contuer < 50; Contuer++)
	{
		Sum = num1 + num2;
		num1 = num2;
		num2 = Sum;
		if (Contuer != 49)
			printf("%ld, ", Sum);
		else
			printf("%ld\n", Sum);
	}
	return (0);
}
