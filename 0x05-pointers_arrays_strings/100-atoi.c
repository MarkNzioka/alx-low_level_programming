#include"main.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: converted string
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, d = 0, num, lng;

	num = 0;
	lng = 0;
	while (s[lng] != '\0')
		lng++;
	while (a < lng && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
