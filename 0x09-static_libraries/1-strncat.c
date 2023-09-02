#include "main.h"

/**
* _strncat - concatenates n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes of str to concatenate
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int c2 = 0, c1 = 0;

	while (dest[c2++])
		c1++;

	for (c2 = 0; src[c2] != '\0' && c2 < n; c2++)
		dest[c1++] = src[c2];

	return (dest);
}
