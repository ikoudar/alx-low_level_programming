#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct og_t *new_dog(char *name, float age, char *owner);
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = (char *)malloc(strlen(name + 1));
	if (newDog->name == NULL)
	{
		free (newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(strlen(owner + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
