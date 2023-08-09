#include"main.h"
/**
 * count_words - count the numebr of words
 * @str: string to count
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - split string to words
 * @str: string to split
 * Return: individual words
 */
char **strtow(char *str)
{
	int num_words, in_word, length, first_word, a;
	char **words, *start = str;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				length = str - start;
				words[first_word] = (char *)malloc((length + 1) * sizeof(char));
				if (!words[first_word])
				{
					for (a = 0; a < first_word; a++)
						free(words[a]);
					free(words);
					return (NULL);
				}
				for (a = 0; a < length; a++)
					words[first_word][a] = start[a];
				words[first_word][length] = '\0';
				first_word++;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			start = str;
			in_word = 1;
		}
		str++;
	}
	if (in_word)
	{
		length = str - start;
		words[first_word] = (char *)malloc((length + 1) * sizeof(char));
		if (words[first_word] == NULL)
		{
			for (a = 0 ; a < first_word; a++)
				free(words[a]);
			free(words);
			return (NULL);
		}
		for (a = 0; a < length; a++)
			words[first_word][a] = start[a];
		words[first_word][length] = '\0';
		first_word++;
	}
	words[first_word] = NULL;
	return (words);
}
