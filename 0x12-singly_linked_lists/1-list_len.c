#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list
 * @h: ptr to the first node
 * Return: numbea of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
