#include "main.h"

/**
 * *cap_string - concatenates two strings
 * @s: char pointer
 * Return: 0
 */
char *cap_string(char *s)
{
	int i;
	int capitalizeNext = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
		|| s[i] == ';' || s[i] == '.' || s[i] == '!'
		|| s[i] == '?' || s[i] == '"' || s[i] == '('
		|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			capitalizeNext = 1;
		}
		else
		{
			if (isalpha((unsigned char)s[i]) && capitalizeNext)
			{
				s[i] = toupper(s[i]);
				capitalizeNext = 0;
			}
			else
			{
				s[i] = tolower(s[i]);
			}
		}
	}
	return (s);
}
