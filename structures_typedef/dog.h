#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - nueva estructura
 * @name: el nombre
 * @age: la edad
 * @owner: duenio
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif