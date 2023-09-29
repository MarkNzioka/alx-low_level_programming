#include"main.h"
/**
 * print_binary_recursive - print binary representation of
 * a number
 * @n: number to check
 */
void print_binary_recursive(unsigned long int n)
{
	if (n > 1)
		print_binary_recursive(n >> 1);
	putchar((n & 1) + '0');
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		print_binary_recursive(n);
}
