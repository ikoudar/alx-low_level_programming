#include "lists.h"
#include <stdio.h>

void print_li(void)__attribute__((constructor));
/**
  *print_li- function that prints line before the main.
  *
*/

void print_li(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
