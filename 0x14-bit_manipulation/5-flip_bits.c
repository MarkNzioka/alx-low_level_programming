#include"main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number to check
 * @m: number to compare
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_bits = n ^ m;
	unsigned long int count = 0;

	while (xor_bits > 0)
	{
		count += xor_bits & 1;
		xor_bits >>= 1;
	}
	return (count);
}
