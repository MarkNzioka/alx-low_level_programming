#include<stdio.h>
/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: array of elements
 * Return: all arguments including the first one
 */
int main(int argc, char *argv[])
{
	int loop;

	for (loop = 0; loop < argc; loop++)
		puts(argv[loop]);
	return (0);
}
