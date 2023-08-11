#include"main.h"
/**
 * array_range - create an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: minimum values plus maximum values
 */
int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (a = min; a <= max; a++)
		arr[a - min] = a;
	return (arr);
}
