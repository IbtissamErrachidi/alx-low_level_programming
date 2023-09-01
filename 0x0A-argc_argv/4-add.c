#include <stdio.h>
#include "main.h"

/**
* main - adds two positive numbers and prints the results
* @argc: argument count
* @argv: array of strings
* Return: 0 (Success), else if error 1
*/


int main(int argc, char *argv[])
{
	int sum, n, i, j, k;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		n = atoi(argv[k]);
		if (n >= 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
