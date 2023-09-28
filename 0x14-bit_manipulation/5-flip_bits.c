#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip
 * @n: The first number.
 * @m: The second number to flip to.
 *
 * Return: The number of bits that need to be flipped.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new = n ^ m;
	int count = 0;

	while (new > 0)
	{
		count += new & 1UL;
		new >>= 1;
	}
	return (count);
}
