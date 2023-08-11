#include"main.h"
/**
 * is_digit - checke whether it is a number
 * @c: string to check
 * Return: digit
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * length - check length of string
 * @str: string to check
 * Return: length of string
 */
unsigned int length(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * str_to_int - convert string to integer
 * @str: strting to convert
 * Return: converted string
 */
int str_to_int(char *str)
{
	int result = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		result = result * 10 + (str[i] - '0');
	return (result);
}
/**
 * error_message - print error message and exit
 */
void error_message(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: size of array
 * Return: multiplied numbers
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int result, nm1, nm2;
	unsigned int i;

	if (argc != 3)
		error_message();
	for (i = 0; i < length(num1); i++)
		if (!is_digit(num1[i]))
			error_message();
	for (i = 0; i < length(num2); i++)
		if (!is_digit(num2[i]))
			error_message();
	nm1 = str_to_int(num1);
	nm2 = str_to_int(num2);
	result = nm1 * nm2;
	printf("%d\n", result);
	return (0);
}
