#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value found or -1
 **/
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	size_t jump_step = sqrt(size);
	size_t left = 0;
	size_t right = jump_step;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump_step;
	}

	for (size_t i = left; i < right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

