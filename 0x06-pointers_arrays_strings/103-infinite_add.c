#include"main.h"
/**
 * infinite_add - add two numbers
 * @n1: number 1
 * @n2: number 2
 * Return: r
 * @size_r: buffer size
 * @r: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, d, x, y, z;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		c = a;
	else
		c = b;
	if (c + 1 > size_r)
		return (0);
	r[c] = '\0';
	d = c - 1;
	while (d >= 0)
	{
		a--;
		b--;
		if (a >= 0)
			x = n1[a] - '0';
		else
			x = 0;
		if (b >= 0)
			y = n2[b] - '0';
		else
			y = 0;
		r[d] = (x + y + z) % 10 + '0';
		z = (x + y + z) / 10;
		d--;
	}
	if (z == 1)
	{
		r[c + 1] = '\0';
		if (c + 2 > size_r)
			return (0);
		while (c-- >= 0)
			r[c + 1] = r[1];
		r[0] = z + '0';
	}
	return (r);
}
