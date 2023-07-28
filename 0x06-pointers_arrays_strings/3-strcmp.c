#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: compared string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while ((s1[a] != '\0' && s2[a] != '\0') && s1[a] == s2[a])
		a++;
	if (s1[a] == s2[a])
		return (0);
	return (s1[a] - s2[a]);
}
