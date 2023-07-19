#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural number to 98
 * @n: parameter to be checked
 * Return: print numbers to 98 or zero
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a < 99; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b > 97; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else
				printf("%d\n", b);
		}
	}
}
