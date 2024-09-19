#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnoteint(dlistint_t **head, const int n)
{
	dlistint_t *N;
	dlistint_t *h;

	N = malloc(sizeof(dlistint_t));
	if (N == NULL)
		return (NULL);

	N->n = n;
	N->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	N->next = h;

	if (h != NULL)
		h->prev = N;

	*head = N;

	return (N);
}
