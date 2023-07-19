#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *new_dog- function that creates a new dog.
  *@name: first member
  *@age: second memeber
  *@owner: third memeber
  *Return: newDog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = (char *)malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	newDog->owner = (char *)malloc(strlen(owner) + 1);
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
