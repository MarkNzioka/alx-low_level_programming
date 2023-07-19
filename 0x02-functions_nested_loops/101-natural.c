#include <stdio.h>
#include "main.h"
/**
 * main - sum of multiples of 3 and 5
 * Return: 0 always
 */
int main(void)
{
	int k, sum1, sum2, sum_all;

	sum1 = 0;
	sum2 = 0;
	sum_all = 0;

	for (k = 0; k < 1024; k++)
	{
		if ((k % 3) == 0)
			sum1 = sum1 + k;
		else if ((k % 5) == 0)
			sum2 = sum2 + k;
	}
	sum_all = sum1 + sum2;
	printf("%d\n", sum_all);
	return (0);
}
