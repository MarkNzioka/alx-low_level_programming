#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string to search for
 * @needle: substring to locate
 * Return: pointer or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int first;

	if (needle == 0)
		return (haystack);
	while (*haystack)
	{
		first = 0;
		if (haystack[first] == needle[first])
		{
			do {
				if (needle[first + 1] == '\0')
					return (haystack);
				first++;
			} while (haystack[first] == needle[first]);
		}
		haystack++;
	}
	return ('\0');
}
