#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: parameter to be checked
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int space, slash;

		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == slash)
				{
					_putchar('\\');
				}
				else if (space < slash)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
