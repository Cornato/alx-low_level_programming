#include "main.h"
/**
 * _calloc - malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int size of elements
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *a;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
	{
		return (p);
	}

	p = malloc(nmemb * size);

	if (p == 0)
	{
		return (NULL);
	}

	a = (char *)p;

	for (x = 0; x < (nmemb * size); x++)
	{
		*(a + x) = 0;
	}

	return (a);
}
