#include "main.h"

/**
 * rot13 - encodes a string using ROT13 cipher
 * @str: input string
 * Return: a pointer to the modified string
 */

char *rot13(char *str)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *prt = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot13[i])
			{
				*str = ROT13[i];
				break;
			}
		}
		str++;
	}
	return (prt);
}
