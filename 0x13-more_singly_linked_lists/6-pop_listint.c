#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the head of the list
 * Return: head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int n;

	if (*head == NULL)
		return (0);

	tempo = *head;
	n = tempo->n;
	*head = (*head)->next;
	free(tempo);

	return (n);
}
