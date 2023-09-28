#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing '0' and '1' characters.
 *
 * Return:converted number, or 0
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;
	int l = 0, i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[l] != '\0')
		l++;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; i < l; i++)
	{
		result <<= 1;
		result |= (b[i] - '0');
	}
	s = result;
	return (s);

}

