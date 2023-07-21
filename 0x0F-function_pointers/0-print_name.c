#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_name- function that prints a name.
  *
  *@name: print the name
  *@f: character
  *
*/

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
