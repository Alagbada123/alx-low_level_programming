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

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		counter++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				counter++;
				slow = slow->next;
				fast = fast->next;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (counter);
		}
	}

	while (slow != NULL)
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		counter++;
		slow = slow->next;
	}
	return (counter);
}
