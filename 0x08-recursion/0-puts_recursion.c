#include"main.h"
/**
 * _puts_recursion - print a string and a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
