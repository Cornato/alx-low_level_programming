#include "main.h"

/**
 * *_memset - concatenates two strings
 * @s: buffer pointer
 * @b: size pointer
 * @n: count pointer
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *Value = memset(s, b, n);

	return (Value);
}
