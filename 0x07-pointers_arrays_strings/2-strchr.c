#include"main.h"
/**
 * _strchr - locate a character in a string
 * @s: string having the characters
 * @c: character to locate
 * Return: s if character found or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int first = 0;

	for (; s[first] >= '\0'; first++)
	{
		if (s[first] == c)
			return (s + first);
	}
	return ('\0');
}
