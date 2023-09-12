#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- free dogs and run away
 * @d: the dog or the dogs
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}
