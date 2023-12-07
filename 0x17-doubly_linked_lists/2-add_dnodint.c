#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: linked list
 * Return: list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *begin;

	begin = malloc(sizeof(dlistint_t));

	if (begin == NULL)
	{
		return (NULL);
	}

	begin->n = n;
	begin->next = *head;
	begin->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = begin;
	}

	*head = begin;

	return (begin);
}
