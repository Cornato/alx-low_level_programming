#include "main.h"

/**
 * Square - _pow
 * @x: number
 * @y: number
 * Return: 0
 */
int Square(int x, int y)
{
	int Result = y * y;

	if (Result == x)
	{
		return (y);
	}
	else if (Result < x)
	{
		return (Square(x, y + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - _pow
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (Square(n, 1));
}
