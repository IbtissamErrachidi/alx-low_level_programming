#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 *
 * @n: is the number of times the \ character
 * should be printed
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("\\\n");
		}
	}
}
