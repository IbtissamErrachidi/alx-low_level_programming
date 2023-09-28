#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a specified index to 0.
 * @n: A pointer to an unsigned long int.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if the operation is successful, -1 if an error occurs.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1 << index;
	*n = (*n & ~m);

	return (1);
}
