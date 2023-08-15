#include "dog.h"
/**
 * free_dog - free dog functions
 * @d: the values to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
