#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that displays all the elements of a linked list.
 * @h: The head of the linked list.
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t temp = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		temp++;
	}

	return (temp);
}
