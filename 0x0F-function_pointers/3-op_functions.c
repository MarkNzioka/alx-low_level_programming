#include"3-calc.h"
/**
 * op_add - add 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: subtraction of the two
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: multiplication of both
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: dividend
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * op_mod - find remainder
 * @a: integer 1
 * @b: integer 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
