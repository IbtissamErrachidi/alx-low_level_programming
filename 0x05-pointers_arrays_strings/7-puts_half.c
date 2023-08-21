#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of the string
 *
 * @str: char array string type
 *
 * Description: If odd number of chars, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}

	putchar('\n');
}
