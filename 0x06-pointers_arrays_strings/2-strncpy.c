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
	int i;
	int slen = strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i >= slen)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
