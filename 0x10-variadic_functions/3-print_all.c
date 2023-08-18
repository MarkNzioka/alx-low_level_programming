#include"variadic_functions.h"
/**
 * print_char - print characters
 * @args: value to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print integer
 * @args: value to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print a float
 * @args: value to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prnt strings
 * @args: string to print
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}
/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * @...: variable arguments to be printed based on the format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	long unsigned int j;
	char type;

	FormatSpecifier format_table[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	va_start(args, format);
	while (format[i] != '\0')
	{
		type = format[i];
		j = 0;
		while (j < sizeof(format_table) / sizeof(FormatSpecifier))
		{
			if (format_table[j].type == type)
			{
				format_table[j].print_function(args);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
