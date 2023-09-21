#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: char pointer
 * Return: 0
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = new[j];
				break;
			}
		}
	}
	return (s);
}
