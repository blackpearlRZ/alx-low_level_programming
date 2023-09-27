#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: ptrr to first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
