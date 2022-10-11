#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - create a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* 
* Return: dog_t 
**/ 

dog_t *new_dog(char *name, float age, char *owner)
{


char *sowner = owner;
char *sname = name;

dog_t *d;

*d = malloc(sizeof dog_t);
if (d == NULL)
{
return (NULL);
}


d->name = malloc(20);


d->owner = malloc(20);


d->name = sname;
d->age = age;
d->owner = sowner;
return (d);
}
