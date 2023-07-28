#include"main.h"
/**
 * _strncat - concatenate two strings
 * @src: pointer to the source string
 * @dest: pointer to destinations string
 * @n: number of bytes present
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
