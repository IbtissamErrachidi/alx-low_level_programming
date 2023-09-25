#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Counts the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{

	size_t sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
