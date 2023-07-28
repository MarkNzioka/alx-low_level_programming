#include"main.h"
/**
 * string_toupper - changelower case to uppercase
 * @m: character to change to uppercase
 * Return: m if uppercase
 */
char *string_toupper(char *m)
{
	int length = 0;

	while (m[length] != '\0')
	{
		if (m[length] >= 97 && m[length] <= 122)
			m[length] = m[length] - 32;
		length++;
	}
	return (m);
}
