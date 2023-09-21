#include "lists.h"

/**
 * free_list - Deallocates memory used by a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: No return value.
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
