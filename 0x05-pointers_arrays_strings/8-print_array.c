#include"main.h"
/**
 * print_array - print array in order
 * @a: pointer to be printed
 * @n: number of arrays
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
