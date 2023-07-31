#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *reverse_listint- function that reverses a list.
  *@head: head of the list
  *
  *Return: head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *second_node = NULL;
	listint_t *first_node = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		second_node = (*head)->next;
		(*head)->next = first_node;
		second_node = *head;
		*head = first_node;
	}
	*head = second_node;
	return (*head);
}
