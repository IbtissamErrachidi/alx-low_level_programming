#ifndef DOG_H
#define DOG_H
/**
* struct dog - a struct about dogs idintification
* @name: type char
* @age: float type
* @owner: char type
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
