#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *free_list- function that frees list.
  *
  *@head: head of list
  *
  *Return:0
*/
void free_list(list_t *head)
{
	list_t *temp;
	
	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
