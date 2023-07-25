#include"main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int xters = 0;

	while (*s)
	{
		s++;
		xters++;
	}
	while (xters)
	{
		s--;
		_putchar(*s);
		xters--;
	}
	_putchar('\n');
}
