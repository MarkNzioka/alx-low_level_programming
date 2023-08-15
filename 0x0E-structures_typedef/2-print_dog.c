#include"dog.h"
/**
 * print_dog - print contents of struct dog
 * @d: pointer to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
	}
}
