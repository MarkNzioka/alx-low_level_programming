#include"main.h"
/**
 * reverse_array - reveerse value of an array
 * @a: array of integers
 * @n: number of elements to swap
 * Return: array in reverse
 */
void reverse_array(int *a, int n)
{
	int b = 0, c;

	for (; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
