#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *delete_nodeint_at_index- function that deletes the node at index,
  *of a list
  *@head: head of the list
  *@index: index of a node
  *
  *Return: -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *last_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old_node = *head;
			if (i == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			last_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((i + 1) == index)
			last_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 *listint_len- counts the number of nodes in a linked list
 *@h: head of the list
 *
 *Return: void
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *k = h;
	size_t i = 0;

	while (k != NULL)
	{
		i += 1;
		k = k->next;
	}
	return (i);
}
