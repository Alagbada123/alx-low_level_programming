#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of the elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
