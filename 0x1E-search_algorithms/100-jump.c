#include "search_algos.h"

/**
 * jump_search - c function to find a value in an array of integers
 *
 * @array: Pointer to beginning of the array
 *
 * @size: Size of array
 *
 * @value: Search value
 *
 * Return: First index where value is found or -1 if not found
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, stop = 0, i = 0;

	if (!array)
	{
		while (stop < size && array[stop] < value)
		{
			start = stop;
			stop = stop + sqrt(size);
			printf("Value checked array[%lu] = [%ld]\n",
					start, array[start]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				start, stop);
		for (i = start, i <= stop; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n,
						i, array[i]");
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
