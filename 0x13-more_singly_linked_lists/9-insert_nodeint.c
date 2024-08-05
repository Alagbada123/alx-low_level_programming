#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: data for the new node
 * Return: address of the new node, or NUll if it failed
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tempo;
	unsigned int a;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tempo = *head;
	for (a = 0; a < idx - 1 && tempo != NULL; a++)
		tempo = tempo->next;

	if (tempo == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tempo->next;
	tempo->next = new_node;

	return (new_node);
}
