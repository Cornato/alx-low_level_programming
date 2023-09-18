#include "main.h"

/**
 * _strlen - to swap value
 * @s: pointer
 * Return: Lenght
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
