#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list with a loop
 * @head: pointer rh the head of the list
 * Return: number of nodes in the list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t counter = 0;
	int loop = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		counter++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	if (!loop)
	{
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			counter++;
			slow = slow->next;
		}
	}
	else
	{
		do {
			printf("[%p] %d\n", (void *)slow, slow->n);
			counter++;
			slow = slow->next;
		} while (slow != fast);

		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}
	return (counter);
}
