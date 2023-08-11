#include"main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: array of elements
 * @size: number of bytes
 * Return: allocated size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
			mem[i] = 0;
	}
	return (mem);
}
