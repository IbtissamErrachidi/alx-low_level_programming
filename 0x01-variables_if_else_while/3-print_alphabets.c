#include <stdio.h>


/**
*main - entry point
*
*Description: false or true validation
*
*Return: 0 (success)
*/

int main(void)
{
	 char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}

	putchar('\n');

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
