#include <stdio.h>
#include "main.h"

/**
* main - print the number of arguments passed to the program
* @argc: argument count
* @argv: array of strings
* Return:0 (Success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
