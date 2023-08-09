#include"main.h"
/**
 * length - find length of the string
 * @str: string to find length of
 * Return: length of the string
 */
int length(char *str)
{
	int len = 0;

	while (!str[len])
		len++;
	return (len);
}
/**
 * argstostr - concatenate all arguments
 * @ac: number of arguments
 * @av: array size
 * Return: pointer to new string, NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int a, b, total_len = 0, pos = 0;
	char *add;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		total_len += length(av[a]) + 1;
	add = (char *)malloc(total_len * sizeof(char));
	if (!add)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			add[pos] = av[a][b];
			pos++;
			b++;
		}
		add[pos] = '\n';
		pos++;
	}
	add[pos] = '\0';
	return (add);
}
