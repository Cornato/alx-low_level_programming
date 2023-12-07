#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: linked list
 * Return: list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t result = 0;

	if (h == NULL)
	{
		return (result);
	}

	while (h != NULL)
	{
		h = h->next;
		result++;
	}
	return (result);
}
