#include"main.h"
/**
 * rot13 - encode string using rot13
 * @a: string to encode
 * Return: encoded string
 */
char *rot13(char *a)
{
	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int intl = 0, rlt;

	for (; a[intl] != '\0'; intl++)
	{
		for (rlt = 0; a[rlt] != '\0'; rlt++)
		{
			if (a[intl] == rot1[rlt])
			{
				a[intl] = rot2[rlt];
				break;
			}
		}
	}
	return (a);
}
