#include <stdio.h>


/**
*main - entry point
*
*Description: print all alphabet letters
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

	return (0);
}
