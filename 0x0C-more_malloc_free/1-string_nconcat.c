#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: type char pointer
 * @s2: type char pointer
 * @n: type unsigned int
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len;
	unsigned int i;
	unsigned int x;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1);


	p = malloc(sizeof(char) * (len + n + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0, i = 0; x < (len + n); x++)
	{
		if (x < len)
		{
			*(p + x) = *(s1 + x);
		}
		else
		{
			*(p + x) = *(s2 + i);
			i++;
		}
	}

	*(p + x) = '\0';

	return (p);
}
