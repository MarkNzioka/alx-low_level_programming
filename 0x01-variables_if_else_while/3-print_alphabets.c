#include <stdio.h>
/**
 * main - introduction of code
 * Return: 0 always
 */
int main(void)
{
	int m = 97;
	int n = 65;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
