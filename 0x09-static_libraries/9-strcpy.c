#include"main.h"
/**
 * _strcpy - copy a pointer
 * @dest: destination
 * @src: string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int xter = 0, i;

	while (*src)
	{
		src++;
		xter++;
	}
	for (i = 0; i < xter; i++)
		src--;
	for (i = 0; i < xter; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
