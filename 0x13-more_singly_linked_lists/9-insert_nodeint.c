#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *insert_nodeint_at_index- function that inserts,
  *a new node at a given position.
  *@head: head of lits
  *@n: integer
  *@idx: index of node
  *Return: void
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ad_node = NULL;
	listint_t *old_node = NULL;
	unsigned int i = 0;

	ad_node = malloc(sizeof(listint_t));
	if (ad_node == NULL || idx > listint_len(*head))
	{
		free(ad_node);
		return (NULL);
	}
	ad_node->n = n;
	ad_node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				ad_node->next = *head;
				*head = ad_node;
				return (ad_node);
			}
			ad_node->next = old_node->next;
			old_node->next = ad_node;
			return (ad_node);
		}
		else if ((i + 1) == idx)
			old_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
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
