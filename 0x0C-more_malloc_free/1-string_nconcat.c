#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string to add to
 * @s2: string to concatenate from.
 * @n: number of bytes added from s2 to s1
 * Return: pointer to the outcome of concatenation, if failed then NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n >= l2)
	{
		n = l2;
	}

	ptr = malloc(sizeof(char) * (l1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
