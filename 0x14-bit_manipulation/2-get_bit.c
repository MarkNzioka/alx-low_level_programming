#include"main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: index, starting from 0
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
