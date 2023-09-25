#include "main.h"

/**
 * *_strspn - concatenates two strings
 * @s: char pointer
 * @accept: char pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int Value = strspn(s, accept);

	return (Value);
}
