#include"main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to destination of string
 * @src: pointer to source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
