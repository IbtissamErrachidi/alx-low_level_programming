#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - print the min number of coins to make change for an amount of money
* @argc: argument count
* @argv: array of strings
* Return: 0 (success), else 1 if error
*/

int main(int argc, char *argv[])
{
	int n, i, change;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	change = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 &&  n >= 0; i++)
	{
		while (n >= cents[i])
		{
			change++;
			n = n - cents[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
