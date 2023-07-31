#include"main.h"
/**
 * _strpbrk - search a string for a set of bytes
 * @s: string to search
 * @accept: bytes in the string
 * Return: s or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int first;

	while (*s)
	{
		for (first = 0; accept[first]; first++)
		{
			if (*s == accept[first])
				return (s);
		}
		s++;
	}
	return ('\0');
}
