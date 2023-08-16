#include"function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter
 * @size: size of array
 * @array: pointer to integer array
 * @action: function pointer pointing to a function
 * taking an integer argument and returning void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
