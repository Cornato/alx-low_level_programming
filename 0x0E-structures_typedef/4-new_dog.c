#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
/**
 * new_dog - dog
 * @name: pointer
 * @age: float
 * @owner:  pointer
 * Return: null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogsturct;

	if (age < 0 || owner == NULL || name == NULL)
		return (NULL);

	dogsturct = malloc(sizeof(dog_t));
	if (dogsturct == NULL)
	{
		free(dogsturct);
		return (NULL);
	}
	dogsturct->name = malloc(sizeof(char) * strlen(name) + 1);
	if (dogsturct->name == NULL)
	{
		free(dogsturct);
		return (NULL);
	}
	dogsturct->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (dogsturct->owner == NULL)
	{
		free(dogsturct->name);
		free(dogsturct);
		return (NULL);
	}
	dogsturct->name = strncpy(dogsturct->name, name, strlen(name) + 1);
	dogsturct->age = age;
	dogsturct->owner = strncpy(dogsturct->owner, owner, strlen(owner) + 1);
	return (dogsturct);
}
