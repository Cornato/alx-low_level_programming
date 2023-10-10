#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - dog.
  * @d: struct pointe
  * Return: 0
  */
void free_dog(dog_t *d)
{
	free(d);
}
