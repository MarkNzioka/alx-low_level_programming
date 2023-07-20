#include "main.h"
/**
 * print_most_numbers - print all numbers except 4 and 2
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2)
		{
			continue;
			a++;
		}
		else if (a == 4)
		{
			continue;
			a++;
		}
		_putchar(a);
	}
	_putchar('\n');
}
