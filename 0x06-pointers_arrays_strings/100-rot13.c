#include "main.h"
#include <ctype.h>
/**
 * *rot13 - Encode 1337
 * @s: string
 * Return: 1
 */
char *rot13(char *s)
{
	int i, j;

	char NormalAlpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char EncodeAlpha[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; NormalAlpha[j] != '\0'; j++)
		{
			if (s[i] == NormalAlpha[j])
			{
				s[i] = EncodeAlpha[j];
				break;
			}
		}
	}

	return (s);
}
