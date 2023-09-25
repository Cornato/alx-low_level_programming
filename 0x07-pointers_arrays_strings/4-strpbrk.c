#include "main.h"

/**
 * *_strpbrk - concatenates two strings
 * @s: char pointer
 * @accept: char pointer
 * Return: 0
 */
unsigned char *_strpbrk(char *s, char *accept)
{
	char *Value = strspn(s, accept);

	return (Value);
}
