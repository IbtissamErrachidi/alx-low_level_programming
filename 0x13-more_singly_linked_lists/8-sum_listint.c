#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all
 * @head: Pointer to the head of the list.
 * Return: Pointer to the node if found, NULL if not found.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
