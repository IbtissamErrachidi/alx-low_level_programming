#include <stdio.h>


/**
*main - entry point
*
*Description: prints all single digit numbers of base 10 starting from 0
*
*Return: 0 (success)
*/

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}

	putchar('\n');

	return (0);
}
