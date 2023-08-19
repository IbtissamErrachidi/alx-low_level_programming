#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Rerurn: Always 0 (Success)
*/

void print_square(int size)
{
	int i, j;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
