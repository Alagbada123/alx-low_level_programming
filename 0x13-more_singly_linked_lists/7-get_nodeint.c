#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node, or NULL if it doesnt exist
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head && a < index)
	{
		head = head->next;
		a++;
	}
	return ((a == index) ? head : NULL);
}
