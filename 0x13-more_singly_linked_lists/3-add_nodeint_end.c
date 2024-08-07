#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to point to the head of the list
 * @n: integer value for hte new node
 * Return: address of the new element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tempo;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tempo = *head;
	while (tempo->next)
		tempo = tempo->next;

	tempo->next = new_node;

	return (new_node);
}
