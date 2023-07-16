#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *malloc_checked- function that allocates memory.
  *@b: character.
  *
  *Return: ptr;
*/


void *malloc_checked(unsigned int b)
{
	void *P;

	P = malloc(b);
	return (P);
}
