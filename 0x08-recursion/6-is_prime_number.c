#include"main.h"
/**
 * is_prime_number - find whether a number is prime
 * @n: number to check
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (0);
	else if (n % 2 == 0 || n % 5 == 0)
		return (0);
	return (1);
}
