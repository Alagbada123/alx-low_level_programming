#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}