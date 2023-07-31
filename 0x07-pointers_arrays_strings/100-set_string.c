#include"main.h"
/**
 * set_string - set value of a pointer to a char
 * @s: pointer to set
 * @to: char to set to pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
