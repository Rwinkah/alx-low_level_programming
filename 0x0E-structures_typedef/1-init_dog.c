#include "dog.h"

/**
* init_dog - bring the dog to life
*
* @d: name of the struct
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: void
**/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
