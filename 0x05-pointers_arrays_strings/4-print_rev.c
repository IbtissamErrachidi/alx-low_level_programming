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


	while (length--)
	{
		putchar(s[length]);
	}

	putchar('\n');
}
