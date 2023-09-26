#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A double pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *courant;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		courant = *head;
		*head = (*head)->next;
		free(courant);
	}
	*head = NULL;
}
