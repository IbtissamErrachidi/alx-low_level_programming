#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the beginning of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The string to be added as a new node.
 *
 * Return: The address of the new element, or NULL if memory allocation fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *b;
	unsigned int i = 0;

	b = strdup(str);

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = b;
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
