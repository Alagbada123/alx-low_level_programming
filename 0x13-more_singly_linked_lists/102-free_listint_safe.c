#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list, even with a loop
 * @h: pointer to pointer to teh head of the list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *tempo;
	size_t counter = 0;
	int loop = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (slow && fast && fast->next)
	{
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
		while (*h)
		{
			tempo = *h;
			*h = (*h)->next;
			free(tempo);
			counter++;
		}
	}
	else
	{
		do {
			tempo = *h;
			*h = (*h)->next;
			free(tempo);
			counter++;
		} while (*h != slow);
		*h = NULL;
	}
	return (counter);
}
