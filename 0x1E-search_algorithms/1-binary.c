#include "search_algos.h"

/**
 * binary_search - binary search function implemented in c
 *
 * @array: array to search in
 *
 * @size: size of the array
 *
 * @value: value to find in the array
 *
 * Return: the index of the element
 **/

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int stop = (int) size - 1;
	int middle = 0;
	int i = 0;

	if (array != NULL)
	{
		while (start <= stop)
		{
			middle = (int) (start + stop) / 2;
			printf("Searching in array: ");
			for (i = start; i < stop; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				start = middle + 1;
			}
			if (array[middle] > value)
			{
				stop = middle - 1;
			}
			if (array[middle] == value)
				return (middle);
		}
	}
	return (-1);
}
