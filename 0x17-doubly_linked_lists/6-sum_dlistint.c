#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: Add of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int Add;

	Add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			Add += head->n;
			head = head->next;
		}
	}

	return (Add);
}
