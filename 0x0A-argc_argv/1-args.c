#include<stdio.h>
/**
 * main - print argc
 * @argc: size of array
 * @argv: number of elements
 * Return: argc, number of arguments
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
