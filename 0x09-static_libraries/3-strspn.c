#include"main.h"
/**
 * _strspn - get length of  prefix substring
 * @s: string with the characters
 * @accept: bytes present to be measured
 * Return: length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int first;

	while (*s)
	{
		first = 0;
		for (; accept[first]; first++)
		{
			if (*s == accept[first])
			{
				bytes++;
				break;
			}
			else if (accept[first + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
