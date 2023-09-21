#include "lists.h"
#include <string.h> 

/**
 * add_node_end - Appends a new node at the end of a list_t linked list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the updated head of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;
	list_t *temp;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
