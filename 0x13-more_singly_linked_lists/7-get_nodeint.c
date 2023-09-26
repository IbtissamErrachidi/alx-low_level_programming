#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at a given index of a listint_t list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the node does not exist, returns NULL. Otherwise, returns
 *         a pointer to the requested node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
