#include <string.h>
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
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: ptr to the first node
 * @str: str to be duplicated
 * Return: the address of the new node or
 * NULL if shitt went south
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
