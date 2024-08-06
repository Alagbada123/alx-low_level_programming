#include "lists.h"
#include <stdlib.h>

/**
 * detect_loop - detects if there is a loop in the list
 * @head: pointer to the head of the list
 * Return: 1 if loop is found, 0 otherwise
 */
int detect_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}
	return (0);
}

/**
 * free_list_no_loop - frees a list with no loop
 * @head: pointer to the head of the list
 * Return: number of nodes freed
 */
size_t free_list_no_loop(listint_t **head)
{
	listint_t *tempo;
	size_t counter = 0;

	while (*head)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
		counter++;
	}
	return (counter);
}

/**
 * free_list_with_loop - frees a list with a loop
 * @head: pointer to the head of the list
 * @loop_node: pointer to a node in the loop
 * Return: number of nodes freed
 */
size_t free_list_with_loop(listint_t **head, listint_t *loop_node)
{
	listint_t *tempo;
	size_t counter = 0;
	listint_t *slow = *head;

	while (slow != loop_node)
	{
		tempo = slow;
		slow = slow->next;
		free(tempo);
		counter++;
	}
	while (loop_node && loop_node->next != loop_node)
	{
		tempo = loop_node->next;
		loop_node->next = loop_node->next->next;
		free(tempo);
		counter++;
	}
	free(loop_node);
	counter++;
	*head = NULL;
	return (counter);
}

/**
 * free_listint_safe - frees a listint_t list, even with a loop
 * @h: pointer to pointer to the head of the list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *loop_node;

	if (h == NULL || *h == NULL)
		return (0);

	if (detect_loop(*h))
	{
		listint_t *slow = *h, *fast = *h;

		while (slow && fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
			{
				loop_node = slow;
				break;
			}
		}
		counter = free_list_with_loop(h, loop_node);
	}
	else
	{
		counter = free_list_no_loop(h);
	}
	*h = NULL;
	return (counter);
}
