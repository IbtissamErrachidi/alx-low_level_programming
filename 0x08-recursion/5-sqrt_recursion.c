#include "main.h"
/**
* nat_sqrt - recurses to find the natural sqrt of a number
* @n: number to calculate its sqrt
* @i: iterator
* Return: -1 if no natural sqrt, else, value of square root
*/
int nat_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (nat_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
* Return: -1 if number is negative or doesn't have natural sqrt
* else, result of square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (nat_sqrt(n, 0));
}
