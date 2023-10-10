#include "dog.h"
#include <string.h>
#include <stdlib.h>
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

	if (owner == NULL || name == NULL || age < 0)
		return (NULL);
		dog_t *dogsturct;
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
	dogsturct->name = _strncpy(dogsturct->name, name);
	dogsturct->age = age;
	dogsturct->owner = owner;
	return (dogsturct);
}
