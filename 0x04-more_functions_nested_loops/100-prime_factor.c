#include <stdio.h>

/**
 * main - Entry Point
 * Description: Find the largest prime factor of a given number.
 * Return: 0
 */
int main(void)
{
	long int Value = 612852475143;
	long int factors = -1;
	long int Counter;

	while (Value % 2 == 0)
	{
	    factors = 2;
	    Value /= 2;
	}
	for (Counter = 3; Counter * Counter <= Value; Counter += 2)
	{
	    while (Value % Counter == 0)
	    {
		factors = Counter;
		Value /= Counter;
	    }
	}
	if (Value > 2)
	{
	    factors = Value;
	}
	printf("%ld\n", factors);
	return (0);
}
