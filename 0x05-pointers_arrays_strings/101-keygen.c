#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generate random passwords
 * Return: 0 always
 */
int main(void)
{
	char psswd[100];
	int a = 0, rndm = 0, sum = 0;

	srand(time(0));
	for (a = 0; sum < 2644; a++)
	{
		rndm = (rand() % 25) + 65;
		psswd[a] = rndm;
		sum += rndm;
	}
	psswd[a++] = 2772 - sum;
	psswd[a++] = '\0';
	printf("%s\n", psswd);
	return (0);
}
