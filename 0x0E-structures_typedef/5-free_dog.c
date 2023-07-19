#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *free_dogs- function that frees dogs.
  *
  *
  *@d: struct dog to free.
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(->name);
		free(->owner);
		free(d);
	}
}
