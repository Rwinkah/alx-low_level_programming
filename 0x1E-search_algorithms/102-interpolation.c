#include "search_algos.h"

/**
 * interpolation_search - c function to implement interpolation
 * search on a sorted algorithm
 *
 * @arrah: Pointer to the first element of the array
 *
 * @size: size of the array
 *
 * @value: value to find
 *
 * Return: int
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, stop = size - 1, pos = 0;

	if (array)
	{
		while ((array[stop] != array[start]) &&
				(value >= array[start]) && value <= array[stop])
		{
			pos = start + (((float)(stop - start) / (array[stop] - array[start])) * 
						(value - array[start]));
			printf("Value checked array [%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				start = pos + 1;
			else if (value < array[pos])
				stop = pos - 1;
			else
				return (pos);
		}
		if (value == array[start])
			return (start);
		pos = start + (((float)(stop - start) / (array[stop] - array[start])) *
									(value - array[start]));
		printf("Value checked array [%lu] is out of range\n", pos);
	}
	return (-1);
}	
