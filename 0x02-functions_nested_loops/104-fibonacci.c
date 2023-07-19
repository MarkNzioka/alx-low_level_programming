#include<stdio.h>
/**
 * main - print first 98 fibonacci numbers
 * Return: 0 always
 */
int main(void)
{
	int r;
	unsigned long num1 = 0, num2 = 1, sum;

	for (r = 0; r < 99; r++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (r == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
