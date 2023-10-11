#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: array
 * @size: pointer
 * @cmp: pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size < 1 || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
