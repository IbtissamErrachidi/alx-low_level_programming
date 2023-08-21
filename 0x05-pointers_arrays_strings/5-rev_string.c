#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	int start = 0;
	int end = length - 1;

	/* Reverse the string using a two-pointer approach */
	while (start < end)
	{
		/* Swap characters at the start and end positions */
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the pointers towards each other */
		start++;
		end--;
	}
}

