#include"main.h"
/**
 * *create_array - allocate memory to an array pointer
 * @size: size of characters
 * @c: character to initialize
 * Return: byte to the first block, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int first;

	if (size == 0)
		return (NULL);
	array = (char *)(malloc(size * sizeof(char)));
	if (!array)
		return (NULL);
	for (first = 0; first < size; first++)
		array[first] = c;
	return (array);
}
