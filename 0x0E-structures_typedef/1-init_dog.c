#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *init_dog- function that initialize a variable of type.
 * struct my_struct - Short description.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: dog.
 * Description: Longer description
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
