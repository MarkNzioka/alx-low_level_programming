#include "main.h"
/**
 * print_line - draw a straight line
 * @n: parameter to be checked
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
