#include<stdio.h>
#include<stdlib.h>
/**
 * main - print opcodes of the program's main function
 * @argc: number of arguments
 * @argv: size of array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main = (char *)&main;
	for (i = 0; i < bytes; i++)
		printf("%02hhx ", main[i]);
	printf("\n");
	return (0);
}
