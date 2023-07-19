#include<stdio.h>
#include"main.h"
/**
 * main - print fibonacci first 50 digits
 * Return: 0 always
 */
int main(void)
{
	int a, b, i, next;

	a = 1;
	b = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (a != 20365011074)
			printf("%d, ", a);
		else
			printf("%d\n", a);
		next = a + b;
		a = b;
		b = next;
	}
	return (0);
}
