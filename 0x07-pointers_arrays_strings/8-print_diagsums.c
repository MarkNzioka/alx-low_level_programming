#include"main.h"
/**
 * print_diagsums - print sum of two diagonals of a square matrix
 * @a: diagonals to multiply
 * @size: size of matrices
 */
void print_diagsums(int *a, int size)
{
	int first, sum1 = 0, sum2 = 0;

	for (first = 0; first < size; first++)
	{
		sum1 += a[first];
		a += size;
	}
	a -= size;
	for (first = 0; first < size; first++)
	{
		sum2 += a[first];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
