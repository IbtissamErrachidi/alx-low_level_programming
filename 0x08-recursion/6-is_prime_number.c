#include "main.h"
/**
* test_pnmbr - recursive function tests if a number is primary
* @n: number to test
* @i: iterator
* Return: 1 if n is primary, else, 0.
*/
int test_pnmbr(int n, int i)
{
if (i > 1)
{
	if (n % i == 0)
		return (0);
	else
		return (test_pnmbr(n, i - 1));
}
	else
		return (1);
}


/**
* is_prime_number - determines if integer is primary
* @n: number to test
* Return: 1 if n is a primary, else 0.
*/


int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	else
		return (test_pnmbr(n, n - 1));
}
