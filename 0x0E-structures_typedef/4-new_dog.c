#include "dog.h"
#include <stdlib.h>
/**
* new_dog - function that creates a new dog name
* @name: dogs name
* @age: dogs age
* @owner: name of dogs owner
* Return: pointer to new dog, otherwise NULL.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *djan;
	char *i, *j;
	int x, y, z;

	djan = malloc(sizeof(struct dog));
	if (djan == NULL)
		return (NULL);

	for (x = 0; *(name + x) != '\0'; x++)
		;
	for (y = 0; *(owner + y) != '\0'; y++)
		;
	i = malloc(sizeof(char) * x + 1);
	if (i == NULL)
	{
		free(djan);
		return (NULL);
	}
	j = malloc(sizeof(char) * y + 1);
	if (j == NULL)
	{
		free(i);
		free(djan);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		*(i + z) = *(name + z);
	for (z = 0; z <= y; z++)
		*(j + z) = *(owner + z);

	djan->name = i;
	djan->age = age;
	djan->owner = j;

	return (djan);
}
