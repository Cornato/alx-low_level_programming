#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int Counter, Checked1, Checked2;
	long int Num1, Num2, Num3, Num4, Num5, Num6;

	Num1 = 1;
	Num2 = 2;
	Checked1 =  Checked2 = 1;
	printf("%ld, %ld", Num1, Num2);
	for (Counter = 0; Counter < 96; Counter++)
	{
		if (Checked1)
		{
			Num3 = Num1 + Num2;
			printf(", %ld", Num3);
			Num1 = Num2;
			Num2 = Num3;
		}
		else
		{
			if (Checked2)
			{
				Num5 = Num1 % 1000000000;
				Num6 = Num2 % 1000000000;
				Num1 = Num1 / 1000000000;
				Num2 = Num2 / 1000000000;
				Checked2 = 0;
			}
			Num4 = (Num5 + Num6);
			Num3 = Num1 + Num2 + (Num4 / 1000000000);
			printf(", %ld", Num3);
			printf("%ld", Num4 % 1000000000);
			Num1 = Num2;
			Num5 = Num6;
			Num2 = Num3;
			Num6 = (Num4 % 1000000000);
		}
		if (((Num1 + Num2) < 0) && Checked1 == 1)
			Checked1 = 0;
	}
	printf("\n");
	return (0);
}
