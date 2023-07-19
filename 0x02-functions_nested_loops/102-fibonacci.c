#include<stdio.h>
/**
 * main - find fibonacci sequence
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long num1, num2, sum;

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 50; ++i)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
