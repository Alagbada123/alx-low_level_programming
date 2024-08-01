#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head;
		head = head->next;
		free(tempo->str);
		free(tempo);
	}
}
