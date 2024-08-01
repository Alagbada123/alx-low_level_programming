#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tempo;
	unsigned int len = 0;

	while (str && str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
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
