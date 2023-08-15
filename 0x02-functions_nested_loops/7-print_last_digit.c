#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number from which to extract and print the last digit
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	n = -n;

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
