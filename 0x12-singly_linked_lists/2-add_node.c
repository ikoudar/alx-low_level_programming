#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *add_node- function that adds a new node at the beginning of the list.
  *
  *@head: the head of the list
  *@str: string of the list
  *Return: 0
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
