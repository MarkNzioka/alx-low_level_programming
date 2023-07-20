#include "main.h"
/**
 * _isupper - check whether the letter is uppercase
 * @c: parameter to be checked
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
