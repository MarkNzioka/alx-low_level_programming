#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @m: parameter to be checked
 * Return: last digit or zero
 */
int print_last_digit(int m)
{
	int last;

	last = m % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
