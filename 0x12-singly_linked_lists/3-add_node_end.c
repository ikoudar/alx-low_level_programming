#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *add_node_end- function that adds a new node at the end of list.
  *
  *@head: head of the list
  *@str: string
  *Return: new
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *c = *head;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->str = NULL;
	}
	else
		return (NULL);
	if (c != NULL)
	{
		while (c->next != NULL)
			c = c->next;
		c->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
