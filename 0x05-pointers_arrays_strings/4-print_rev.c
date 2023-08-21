#include "main.h"


/**
 * print_rev - prints reversed string, followed by a new line
 *
 * @s: pointer to the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	int i = 0;

	while (i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
