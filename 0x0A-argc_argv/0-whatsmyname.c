#include<stdio.h>
/**
 * main - print program name
 * @argc: size of array
 * @argv: array of elements
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	puts(argv[argc - 1]);
	return (0);
}
