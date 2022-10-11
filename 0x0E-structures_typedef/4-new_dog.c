#include "dog.h"
#include <stdio.h>
#include <stdlib.h>





/**
* _strlen - find the length of a string
*
* @s: pointer to string
*
* Return: int
**/
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
 * _strcpy - copy from src to dest
 *
 * @dest: destination
 * @src:  source
 *
 * Return: dest
 **/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);
}

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
dog_t *new_dog;
int lname, lowner;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

lname = _strlen(name);
new_dog->name = malloc(sizeof(char) * lname + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
lowner = _strlen(owner);
new_dog->owner = malloc(sizeof(char) * lowner + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->owner = _strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}

