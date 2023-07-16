#include "search_algos.h"

/**
 * linear_search - c program using linear search algorithmm on a list
 *
 * @array: Head of the array
 *
 * @size: Size of the array
 *
 * @value: value to be found
 *
 * Return: int
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
