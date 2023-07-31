#include"main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes to copy
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
		s[a] = b;
	return (s);
}
