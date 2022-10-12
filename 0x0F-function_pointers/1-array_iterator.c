#include <stdio.h>

/**
 * array_iterator - perform an action on every member of an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 **/


void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array == NULL || action == NULL)
{
return;
}

while (i < size)
{
action(array[i]);
i++;
}
}
