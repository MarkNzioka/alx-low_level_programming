#include "main.h"
/**
 * _abs - asbolute value of an integer
 * Return: absolute value of a number of zero
 * @c: parameter to be tested
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
