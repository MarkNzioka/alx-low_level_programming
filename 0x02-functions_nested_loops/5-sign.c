#include "main.h"
/**
 * print_sign - print the sign of a number
 * Return: 1 is positive and n greater than zero
 * 0 if n is zero and -1 if n is less then zero
 * @n: parameter to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
