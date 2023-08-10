#include"main.h"
/**
 * length - find number of characters
 * @str: characters to find length of
 * Return: length of characters
 */
unsigned int length(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to be printed
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, a, b;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = length(s1);
	len2 = length(s2);
	if (n >= len2)
		n = len2;
	con = (char *)malloc(len1 + n + 1);
	if (con)
	{
		for (a = 0; a < len1; a++)
			con[a] = s1[a];
		for (b = 0; b < n; b++, a++)
			con[a] = s2[b];
		con[a] = '\0';
	}
	return (con);
}
