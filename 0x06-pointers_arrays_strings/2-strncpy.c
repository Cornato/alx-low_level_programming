#include "main.h"

/**
 * *_strncpy - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: int variable
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
