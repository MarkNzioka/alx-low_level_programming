#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to initialize
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog onwer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
