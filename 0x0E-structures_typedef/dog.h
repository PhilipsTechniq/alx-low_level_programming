#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  a new type struct dog
 * @name: of dog type
 * @age: lifespam
 * @owner: in numbers
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - define type for struct dog
 */
typedef struct dog dog_t;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
