#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: linked list
 * Return: list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t result = 0;

	if (h == NULL)
	{
		return (result);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		result++;
	}

	return (result);
}
