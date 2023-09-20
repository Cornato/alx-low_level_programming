#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - concatenates two strings
 * @s: char pointer
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i;
	int Lenght = strlen(s);

	for (i = 0; i < Lenght; i++)
	{
		if (islower((unsigned char)s[i]))
		{
			s[i] = toupper((unsigned char)s[i]);
		}
	}
	return (s);
}
