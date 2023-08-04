#include "main.h"
/**
 * _islower - determine lowercase
 * Return: 1 if lowercase 0 if not
 * @c: parameter to be checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
