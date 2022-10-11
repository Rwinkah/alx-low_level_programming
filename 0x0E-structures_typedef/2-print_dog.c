#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if (d == 0)
{
return;
}

if (d->name == NULL)
{
printf("nil");
}

printf("Name: %s\n",d->name);
if (d->age <= 0)
{
printf("nil");
}

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("nil");
}

printf("Owner: %s\n", d->owner);
}

