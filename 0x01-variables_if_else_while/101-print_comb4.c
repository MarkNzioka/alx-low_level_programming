#include <stdio.h>
/**
 * main - intro to code
 * Return: 0 always
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			for ( c = b + 1; c <= '9'; c++)
			{
				if (a != b)
				{
					if (a != c)
					{
						if (b != c)
						{
							putchar(a);
							putchar(b);
							putchar(c);
							if (a == '7' && b == '8' && c == '9')
								continue;
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
