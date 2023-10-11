#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long j;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
