#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo, *to_delete;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		to_delete = *head;
		*head = (*head)->next;
		free(to_delete);
		return (1);
	}

	tempo = *head;
	for (a = 0; a < index - 1 && tempo != NULL; a++)
		tempo = tempo->next;

	if (tempo == NULL || tempo->next ==  NULL)
		return (-1);

	to_delete = tempo->next;
	tempo->next = to_delete->next;
	free(to_delete);

	return (1);
}
