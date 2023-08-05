#include<stdio.h>
#include<stdlib.h>
/**
 * main - print minimum number of coins to make change
 * @argc: number of arguments
 * @argv: size of array
 * Return: change, 0 if argument is negative and error if no argument is passed
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	if (cents == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
