#include <stdio.h>
#include "dog.h"
/**
 * init_dog - struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->owner = owner;
		d->name = name;
	}
}
