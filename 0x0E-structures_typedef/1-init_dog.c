#include "dog.h"
#include <stdlib.h>
/**
 * int_dog - initializes a variable of type struct dog
 * @d: address holding the varsible
 * @name: dog name to initialize
 * @age: of dog
 * @owner: of dog to assign
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
