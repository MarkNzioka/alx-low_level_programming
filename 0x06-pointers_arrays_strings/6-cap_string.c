#include"main.h"
/**
 * cap_string - capitalise first letter of each word
 * @k: character to be capitalised
 * Return: capitalised character
 */
char *cap_string(char *k)
{
	int length = 0;

	while (k[length])
	{
		if (k[0] >= 97 && k[0] <= 122)
			k[0] -= 32;
		if (k[length] == ' ' || k[length] == '\t'
				|| k[length] == '\n' || k[length] == ','
				|| k[length] == ';' || k[length] == '.'
				|| k[length] == '!' || k[length] == '?'
				|| k[length] == '"' || k[length] == '('
				|| k[length] == ')' || k[length] == '{'
				|| k[length] == '}')
		{
			if (k[length + 1] >= 97 && k[length + 1] <= 122)
				k[length + 1] -= 32;
		}
		length++;
	}
	return (k);
}
