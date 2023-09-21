#include "main.h"

/**
 * is_separator - Checker
 * @c: char pointer
 * Return: 0
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}

	return (false);
}
/**
 * *cap_string - parameter name c as char poitner
 * @s: type char
 * Return: 1
 */
char *cap_string(char *s)
{
	bool capitalizes = true;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (capitalizes && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			capitalizes = false;
		}
		else if (is_separator(s[i]))
		{
			capitalizes = true;
		}
		else
		{
			capitalizes = false;
		}
	}

	return (s);
}
