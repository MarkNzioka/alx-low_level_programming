#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: size of the array
 * Return: product of two numbers
 */
int main(int argc, char *argv[])
{
	int length = argc - 1;

	if (length != 2)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
