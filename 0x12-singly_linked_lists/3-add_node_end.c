#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - mesure str
 * @s: the string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: ptr to the head of the list
 * @str: str to be duplicated
 * Return: the address of the new element
 * or NULL if it shitt went south
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
