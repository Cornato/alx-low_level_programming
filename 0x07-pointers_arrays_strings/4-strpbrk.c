#include "main.h"

/**
 * *_strpbrk - concatenates two strings
 * @s: char pointer
 * @accept: char pointer
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *Value = strpbrk(s, accept);

	return (Value);
}
