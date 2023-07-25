#include"main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int xter = 0, i = 0;
	char last_xter;

	while (*s)
	{
		s++;
		xter++;
	}
	for (i = 0; i < xter; i++)
		s--;
	for (i = 0; i < (xter / 2); i++)
	{
		int last = xter - 1;

		last_xter = s[last - i];
		s[last - i] = s[i];
		s[i] = last_xter;
	}
}
