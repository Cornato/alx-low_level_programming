#include "main.h"

/**
 * _isdigit - Checker Number 1 - 9
 *  * @c: Checker Number true
 * Return: 1 if c 1 - 9 else 0
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}
