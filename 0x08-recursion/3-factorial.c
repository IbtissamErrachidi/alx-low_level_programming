#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: number to calculate its factorial
 * Return: -1 if number is negative, 0 if n is equal to 0, else factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
