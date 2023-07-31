#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *free_listint- function that frees a list.
  *
  *@head: head of list
  *
  *Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
