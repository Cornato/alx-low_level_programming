#include "main.h"

/**
 * _strlen - to swap value
 * @s: pointer
 * Return: Lenght
 */
int _strlen(char *s)
{
	int i;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
