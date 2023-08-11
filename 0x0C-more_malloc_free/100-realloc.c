#include"main.h"
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of allocated space
 * @new_size: size in bytes of new memory block
 * Return: reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	char *src, *dest;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	if (new_mem != NULL)
	{
		src = (char *)ptr;
		dest = (char *)new_mem;
		for (a = 0; a < old_size && a < new_size; a++)
			dest[a] = src[a];
		free(ptr);
	}
	return (new_mem);
}
