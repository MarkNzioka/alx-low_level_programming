#include "main.h"
/**
 * print_most_numbers - print all numbers except 4 and 2
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50)
		{
			continue;
		}
		else if (a == 52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
