#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy the string.
 * @dest: char pointer
 * @src: char pointer
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *mainDest = dest;

	for (; *src != '\0'; src++, dest++)
	{
		*dest = *src;
	}

	*dest = '\0';
	return (mainDest);
}
