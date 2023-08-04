#include "main.h"
/**
 * _puts - prints a string followed by a new llne to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
