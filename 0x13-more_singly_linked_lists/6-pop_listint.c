#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *pop_listint-  function that deletes the head node of a list.
  *
  *@head: head of the list
  *
  *Return: i
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;


	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	i = temp->n;

	*head = (*head)->next;
	free(temp);

    return (i);
}
