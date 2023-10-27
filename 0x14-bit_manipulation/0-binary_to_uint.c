#include"main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '0' || b[a] == '1')
			num = num * 2 + (b[a] - '0');
		else
			return (0);
	}
	return (num);
}
