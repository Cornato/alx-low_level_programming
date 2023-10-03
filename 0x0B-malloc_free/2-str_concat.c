#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: type char pointer contents the first string
 * @s2: type char pointer contents the second string
 * Return: failure => null else the string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	_strncat(ptr, s1, len1);

	_strncat(ptr, s2, len2);

	return (ptr);
}
