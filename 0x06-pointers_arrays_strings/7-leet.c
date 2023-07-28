#include"main.h"
/**
 * leet - encode to 1337
 * @n: string to encode
 * Return: encoded string
 */
char *leet(char *n)
{
	char leet_let[] = "aeotlAEOTL";
	char leet_num[] = "4307143071";
	int length = 0, a;

	while (n[length])
	{
		a = 0;
		while (a < 10)
		{
			if (leet_let[a] == n[length])
				n[length] = leet_num[a];
			a++;
		}
		length++;
	}
	return (n);
}
