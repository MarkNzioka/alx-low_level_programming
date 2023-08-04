#include"main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination of copied data
 * @src: data to be copied
 * @n: numbber of bytes to copy
 * Return: copied data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
