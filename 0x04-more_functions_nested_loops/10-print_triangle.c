#include"main.h"
/**
 * print_triangle - draw triangle
 * @size: parameter to be checked
 */
void print_triangle(int size)
{
	int num1, num2;
	
	if (size > 0)
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			for ((num2 = size - num1); num2 > 0; num2--)
			{
				_putchar(' ');
			}
			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar('#');
			}
			if (num1 == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
