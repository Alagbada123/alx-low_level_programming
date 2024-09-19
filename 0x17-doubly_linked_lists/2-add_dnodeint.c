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
	dlistint_t *New;
	dlistint_t *h;

	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;
	New->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	New->next = h;

	if (h != NULL)
		h->prev = New;

	*head = New;

	return (New);
}
