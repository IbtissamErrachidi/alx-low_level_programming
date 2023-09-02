#include "main.h"

/**
* _memset - Fills the first n bytes of memory pointed by s
*with a constant byte b
* @s: buffer array
* @b: constant byte
* @n: number of bytes of memory to fill
* Return: Pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
