#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: int variable
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = strlen(dest);

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, length++)
	{
		dest[length] = src[i];
	}
	return (dest);
}
