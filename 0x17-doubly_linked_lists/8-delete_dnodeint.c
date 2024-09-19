#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *P;
	dlistint_t *Q;
	unsigned int a;

	P = *head;

	if (P != NULL)
		while (P->prev != NULL)
			P = P->prev;

	a = 0;

	while (P != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = P->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				Q->next = P->next;

				if (P->next != NULL)
					P->next->prev = Q;
			}

			free(P);
			return (1);
		}
		Q = P;
		P = P->next;
		a++;
	}

	return (-1);
}
