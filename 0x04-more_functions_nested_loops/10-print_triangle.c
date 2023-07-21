#include "main.h"
/**
 * print_triangle - draw a triangle usig=ng #
 * @size: parameter to be checked
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 0; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
