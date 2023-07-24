#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: value to swap with b
 * @b: value to swap with a
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
