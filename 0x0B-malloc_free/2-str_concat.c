#include"main.h"
/**
 * str_concat - join s1 and s2
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, length1 = 0, length2 = 0;
	char *join;

	if (s1[0] == '\0' || s2[0] == '\0')
	{
		s1 = "";
		s2 = "";
	}
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	join = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (a < length1)
	{
		join[a] = s1[a];
		a++;
	}
	while (b < length2)
	{
		join[a] = s2[b];
		b++;
		a++;
	}
	join[a] = '\0';
	return (join);
}
