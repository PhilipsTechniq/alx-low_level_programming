#include "dog.h"
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: of the dog to create
 * @age: how old is the dog
 * @owner: the owner
 * Return: pointer if succes, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (!name || !owner)
		return (NULL);

	nd = (dog_t *)malloc(sizeof(dog_t));
	if (!nd)
		return (NULL);
	nd->name = strdup(name);
	if (!nd->name)
	{
		free(nd);
		return (NULL);
	}

	nd->age = age;
	nd->owner = strdup(owner);
	if (!nd->owner)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	return (nd);
}
