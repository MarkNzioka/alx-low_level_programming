#include"main.h"
/**
 * _strlen_recursion - print length of a string
 * @s: string to check
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
