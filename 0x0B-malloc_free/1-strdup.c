#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer
 * @str: pointer
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * strlen(str) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);
}
