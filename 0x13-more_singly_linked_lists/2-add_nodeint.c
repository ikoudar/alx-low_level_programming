#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *add_nodeint- function that adds a new node at the beginning of a list.
  *
  *@n: integer
  *@head: pointer
  *Return: ad_node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ad_node;

	ad_node = malloc(sizeof(listint_t));
	if (ad_node != NULL)
	{
		ad_node->n = n;
		ad_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		ad_node->next = *head;
	*head = ad_node;
	return (ad_node);
}
