#include"function_pointers.h"
/**
 * int_index - return index for which first element cmp returns non-zero
 * @size: number of elements in array array
 * @array: array element
 * @cmp: pointer to function to compare values
 * Return: -1 if not element matched or size <= 0 and 1 if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
