#include "main.h"

/**
 * prime_number - prime
 * @n: number
 * @divisor: number
 * Return: 0
 */
int prime_number(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, divisor - 1));
	}
}
/**
 * is_prime_number - prime
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_number(n, n - 1));
}
