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

	for (i = 1; i <= 50; i++)
	{
		next = a + b;
		printf("%d", next);
		a = b;
		b = next;
		if (i < 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
