#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - dog x-tics
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
/*void free_dog(dog_t *d);*/
void print_dog(struct dog *d);

#endif
