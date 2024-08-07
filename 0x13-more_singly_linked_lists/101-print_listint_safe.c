#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Z - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **Z(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a, counter = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (a = 0; a < counter; a++)
		{
			if (head == list[a])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (counter);
			}
		}
		counter++;
		list = Z(list, counter, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (counter);
}
