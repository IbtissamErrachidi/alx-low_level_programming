#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenate two strings using malloc
* @s1: string 1
* @s2: string 2
* Return: pointer to concat string, else if failed then NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	c = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (c == NULL)
		return (NULL);

	for (k = 0, l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			c[k] = s1[k];
		else
			c[k] = s2[l++];
	}
	return (c);
}
