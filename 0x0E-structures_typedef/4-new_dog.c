#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
/**
 * new_dog - create new dog
 * @name: type char pointer
 * @age: type float
 * @owner: type char pointer
 * Return: new struct dog else null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogsturct;

	if (name == NULL || age < 0 || owner == NULL)
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
	dogsturct->name = name;
	dogsturct->age = age;
	dogsturct->owner = owner;
	return (dogsturct);
}
