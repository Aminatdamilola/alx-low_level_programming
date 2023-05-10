#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: Value to search for
 * Return: -1, the index of the found value
 **/
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		printf("Found value %d at index 0\n", value);
		return (0);
	}
	int i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Checked value %d at index %d\n", array[i], i);
		i *= 2;
	}
	int left = i / 2;

	int right = fmin(i, size - 1);

	printf("Using binary search on array[%d..%d]\n", left, right);
	return (binary_search(array, left, right, value));
}

/**
 * binary_search - searches for a value in a array
 * @array: array to search in
 * @value: value to look for
 * @left: index of the left bound
 * @right: index of the right
 * Return: -1, index of the value found
 **/
int binary_search(int *array, int left, int right, int value)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Split array[%d..%d] at index %d\n", left, right, mid);
		if (array[mid] == value)
		{
			printf("Found value %d at index %d\n", value, mid);
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	printf("Value %d not found in array\n", value);
	return (-1);
}
