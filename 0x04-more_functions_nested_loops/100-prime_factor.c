#include<stdio.h>
/**
 * main - find prime factors
 * Return: 0 always
 */
int main(void)
{
	long int a = 612852475143, b;

	for (b = 2; b <= a; b++)
	{
		if (a % b == 0)
		{
			a /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
