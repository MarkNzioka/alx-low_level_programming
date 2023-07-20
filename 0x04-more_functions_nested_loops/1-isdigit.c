#include "main.h"
/**
 * _isdigit - find a digit through 0-9
 * Return: 1 if a digit 0 otherwise
 * @c: parameter to be checked
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
