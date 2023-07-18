#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char mk;
	int k;

	k = 1;
	while (k <= 10)
	{
		for (mk = 'a'; mk <= 'z'; mk++)
		{
			_putchar(mk);
		}
	_putchar('\n');
	k++;
	}
}
