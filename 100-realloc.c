#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: type pointer
 * @old_size: type unsigned int
 * @new_size: type unsigned int
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *ps, *ns;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ps = malloc(new_size);
		if (ps == NULL)
			return (NULL);
		return (ps);
	}

	ps = malloc(new_size);
	if (ps == NULL)
		return (NULL);
	ns = ptr;
	for (x = 0; x < old_size; x++)
		*(ps + x) = *(ns + x);
	free(ptr);
	return (ps);
}
