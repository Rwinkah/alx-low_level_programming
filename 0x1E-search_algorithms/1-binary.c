#include "search_algos.h"

/**
 * binary_search - c implementation of binary search algorithm
 *
 * @array: Head of the array
 *
 * @size: size of the array
 *
 * @value: value to find.
 *
 * Return: int
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0, i = 0;

	if (array)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
