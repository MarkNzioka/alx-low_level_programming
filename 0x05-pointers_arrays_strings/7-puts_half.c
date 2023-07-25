#include"main.h"
/**
 * puts_half - print half of the string
 * @str: string to print half of
 */
void puts_half(char *str)
{
	int xter = 0, i;

	while (*str)
	{
		xter++;
		str++;
	}
	for (i = 0; i < xter; i++)
		str--;
	i = (xter % 2 == 0) ? xter / 2 : (xter + 1) / 2;
	for (; i < xter; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
