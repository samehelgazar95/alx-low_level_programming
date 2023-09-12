#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- free dogs and run away
 * @d: the dog or the dogs
 * Return Nothing, it just frees dog or dogs
*/

void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	if (d)
		free(d);
}
