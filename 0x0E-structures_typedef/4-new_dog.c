#include"dog.h"
/**
 * length - find length of string
 * @str: length to find
 * Return: length of string
 */
int length(char *str)
{
	int len = 0;

	if (str[len] != '\0')
		len++;
	return (len);
}
/**
 * copy - copy characters
 * @src: source of code to copy
 * @dest: destination to copy code
 */
void copy(char *src, char *dest)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
}
/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: NULL if it fails or dog details
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_len = length(name);
	int owner_len = length(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(name_len + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	copy(name, newDog->name);
	newDog->owner = malloc(sizeof(owner_len + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	copy(owner, newDog->owner);
	newDog->age = age;
	return (newDog);
}
