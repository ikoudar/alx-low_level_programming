#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *add_nodeint_end- function that adds a new node at the end of a list.
  *@n: integer
  *@head: pointer
  *Return: ad_node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ad_node;
	listint_t *k = *head;

	ad_node = malloc(sizeof(listint_t));
	if (ad_node != NULL)
	{
		ad_node->n = n;
		ad_node->next = NULL;
	}
	else
		return (NULL);
	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = ad_node;
	}
	else
		*head = ad_node;
	return (ad_node);
}
