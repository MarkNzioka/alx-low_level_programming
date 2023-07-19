#include<stdio.h>
/**
 * main - sum of even fibonacci numbers
 * Return: 0 always
 */
int main(void)
{
	unsigned long num1, num2, sum;
	float sum_all;

	num1 = 0;
	num2 = 1;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			sum_all = sum_all + sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", sum_all);
	return (0);
}
