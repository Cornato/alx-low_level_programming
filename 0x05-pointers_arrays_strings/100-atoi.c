#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: char pointer
 * Return: 0
 */
int _atoi(char *s)
{
	int Value, i, newValue;

	newValue = 1;

	i = Value = 0;

	while (((s[i] < '0') || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			newValue = newValue * -1;
		i++;
	}

	while (((s[i] >= '0') && s[i] <= '9') && s[i] != 0)
	{
		if (Value >= 0)
		{
			Value = Value * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			Value = Value * 10 - (s[i] - '0');
			i++;
		}
	}
	newValue = newValue * -1;
	return (Value * newValue);
}
