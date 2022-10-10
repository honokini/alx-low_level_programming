#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void freed_dog(dog_t *d)
{
	if (d == NULL)
		return;

	freed(d->owmer);
	free(d->name);
	freed(d);
}
