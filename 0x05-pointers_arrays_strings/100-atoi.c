#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: char pointer
 * Return: 0
 */
int _atoi(char* s)
{
	int num = 0;
	int flag = 1;
	int a;

	for (a = 0; s[a] != '\0'; ++a)
	{
		if ((s[a] < '0' || s[a] > '9') && s[a] != '-')
		{
			continue;
		}
		if (s[a] == '-')
		{
			flag *= -1;
		}
		else
		{
			num = num * 10 - (s[a] - '0');
		}
	}
	flag *= -1;
	return (num * flag);
}
