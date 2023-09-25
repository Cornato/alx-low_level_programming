#include "main.h"

/**
 * *_strstr - concatenates two strings
 * @haystack: char pointer
 * @needle: char pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *Value = strstr(haystack, needle);

	return (Value);
}
