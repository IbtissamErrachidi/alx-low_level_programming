#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A double pointer to the head of the list.
 *
 * Return: The data (n) of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int s;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	s = temp->n;
	free(temp);
	return (s);
}
