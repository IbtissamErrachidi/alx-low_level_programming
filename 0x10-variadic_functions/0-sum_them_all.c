#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - func that returns the sum of all parameters.
 * @n: type unsigned int
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list add;

	va_start(add, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, unsigned int);
	}
	va_end(add);
	return (sum);

}
