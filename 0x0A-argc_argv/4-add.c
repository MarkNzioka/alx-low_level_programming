#include<stdio.h>
#include<stdlib.h>
/**
 * number - determine whether it is a number
 * @num: number to be checked
 * Return: number
 */
int number(char *num)
{
	while (*num)
	{
		if (*num < '0' || *num > '9')
			return (0);
		num++;
	}
	return (1);
}
/**
 * main - add 2 numbers
 * @argc: number of arguments
 * @argv: size of array
 * Return: sum of 2 numbers and 0 or 1
 */
int main(int argc, char *argv[])
{
	int position, sum = 0;

	for (position = 1; position < argc; position++)
	{
		if (number(argv[position]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[position]);
	}
	printf("%d\n", sum);
	return (0);
}
