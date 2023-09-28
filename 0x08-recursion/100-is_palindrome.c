#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * palindrome - palindrome
 * @s: type char pointer
 * @start: type int
 * @end: type int
 * Return: 0
 */
bool palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (true);
	}

	if (s[start] != s[end])
	{
		return (false);
	}

	return (palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - function that returns 1 if a palindrome else 0
 * @s: type char pointer
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	return (palindrome(s, 0, len - 1) ? 1 : 0);
}
