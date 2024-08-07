#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _Z - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_Z(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t a;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newlist[a] = list[a];
	newlist[a] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t a, counter = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (counter);
	while (*head != NULL)
	{
		for (a = 0; a < counter; a++)
		{
			if (*head == list[a])
			{
				*head = NULL;
				free(list);
				return (counter);
			}
		}
		counter++;
		list = _Z(list, counter, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (counter);
}
