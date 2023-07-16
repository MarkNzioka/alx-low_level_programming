#include <stdio.h>
/**
 * main - intro to the code
 * Return: 0 always
 */
int main(void)
{
	int k = 122;

	while (k >= 97)
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
