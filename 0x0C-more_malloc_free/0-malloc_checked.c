#include"main.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: what to store the memory in
 * Return: allocagted memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
