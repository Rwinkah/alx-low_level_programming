#include "search_algos.h"

/**
 * jump_search - c implementation of jump sort
 *
 * @array: int array to search in
 *
 * @size: size of the array
 *
 * @value: Value to search for in the array
 *
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	size_t high = 0, low = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (high < size && array[high] < value)
	{
		low = high;
		high = high + sqrt(size);
		printf("Value checked array[%lu] = [%d]\n",
		       low, array[low]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       low, high);
	for (i = low; i <= high; i++)
	{
		if (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
