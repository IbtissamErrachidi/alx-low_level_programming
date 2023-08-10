#include <stdio.h>


/**
*main - entry point
*
*Description: prints the lowercase alphabet in reverse, followed by a new line
*
*Return: 0 (success)
*/


int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
