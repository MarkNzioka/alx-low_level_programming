#include"lists.h"
/**
 * print_before_main - print the message before main function
 * is executed
 */
void __attribute__((constructor)) print_before_main()
{
	printf("You are beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
