#include "search_algos.h"

/**
 * linear_search - function to implement linear search algorithm
 *
 * @array: array to search through
 *
 * @size: size of the array
 *
 * @value: value to search for
 *
 * Return: int
 **/

int linear_search(int *array, size_t size, int value)
{
	int *temp = array;
	unsigned long int i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
			printf("Value checked array[%lu] = [%d]\n", i, *temp);
		if (*temp == value)
		{
			return (i);
		}
		i++;
		temp++;
	}
	return (-1);
}
