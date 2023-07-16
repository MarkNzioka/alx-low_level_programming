#include<stdio.h>
/**
 * main - intro to code
 * Return: 0 always
 */
int main(void)
{
	int p;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
