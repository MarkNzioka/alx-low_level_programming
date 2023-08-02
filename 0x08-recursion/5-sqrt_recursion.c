#include"main.h"
/**
 * number - help find sqrt
 * @num: number from 1
 * @root: sqrt to be found
 * Return: sqrt
 */
int number(int num, int root)
{
	if (num * num == root)
		return (num);
	if (num == root)
		return (-1);
	return (1 * number(num + 1, root));
}
/**
 * _sqrt_recursion - give natural square root of a number
 * @n: square root to find
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
