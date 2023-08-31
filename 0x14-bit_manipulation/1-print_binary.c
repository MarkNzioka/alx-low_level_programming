#include"main.h"
/**
 * print_recursive - prints the binary representation of a number
 * @n: number to convert
 */
void print_recursive(unsigned long int n)
{
	if (n > 1)
		print_recursive(n >> 1);
	putchar((n & 1) + '0');
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		print_recursive(n);
}
