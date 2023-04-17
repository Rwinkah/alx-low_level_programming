#include "search_algos.h"

/**
 * interpolation_search - c implementation of interpolation search algorithm 
 *
 * @array: array to search in
 *
 * @size: size of the array
 *
 * @value: Value to search for in the array
 *
 * Return: int 
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, position = 0;

	if (array != NULL)
	{
		while ((array[high] != array[low]) &&
		       (value >= array[low]) &&
		       (value <= array[high]))
		{
			position = low + (((double)(high - low) / (array[high] - array[low])) *
				     (value - array[low]));
			printf("Value checked array[%lu] = [%d]\n", position, array[position]);
			if (array[position] < value)
				low = position + 1;
			else if (value < array[position])
				high = position - 1;
			else
				return (position);
		}
		if (value == array[low])
			return (low);
		position = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", position);
	}
	return (-1);
}
