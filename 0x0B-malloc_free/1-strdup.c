#include <stdlib.h>
#include "main.h"

/**
* *_strdup - copies the string given as parameter
* @str: string to duplicate
* Return: pointer to the copied string (Success), else if failed then NULL
* or if str is equal to NULL
*/

char *_strdup(char *str)
{
	char *dbl;
	unsigned int i = 0, l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l])
	{
		l++;
	}
	dbl = malloc(sizeof(char) * (l + 1));
	if (dbl == NULL)
		return (NULL);

	while ((dbl[i] = str[i]) != '\0')
	{
		i++;
	}
	return (dbl);
}

