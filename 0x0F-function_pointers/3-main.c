#include"3-calc.h"
/**
 * main - perform the necessary operation according
 * to operand passed
 * @argc: number of arguments
 * @argv: size of array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (operator[1] != '\0' || (*operator != '+' && *operator != '-'
				&& *operator != '*' && *operator != '/'
				&& *operator != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(operator);
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
