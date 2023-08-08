#include"main.h"
/**
 * *_strdup - return a function to a newly allocated space in memory
 * @str: string to copy
 * Return: a pointer on success,
 * NULL if insufficient memory or NULL if str is 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i = 0;

	if (!str)
		return (NULL);
	while (str[length] != '\0')
		length++;
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (!duplicate)
		return (NULL);
	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[length] = '\0';
	return (duplicate);
}
