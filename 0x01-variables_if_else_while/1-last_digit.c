#include <stdlib.h>
#include <time.h>
#include <sdtio.h>
/**
* main - entry point
*
* Description: This program prints the value of n status:
* great than,is zero and is not less than 5.
*
* Return:  Always 0 (success).
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("last digit of %i is %i and is great than 5\n", n, digit);
	else if (digit == 0)
		printf("last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("last digit of %i is %i and is less than 5\n", n, digit);
	return (0);
}
