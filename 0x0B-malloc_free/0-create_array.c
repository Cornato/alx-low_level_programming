#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars
 * @size: size of array
 * @c: char
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}