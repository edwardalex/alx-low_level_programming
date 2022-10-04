#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of
 * integers using the binary search algorithm.
 *
 * @array:  pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: index of found value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid = size / 2, i = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			low = mid + 1;
		if (value < array[mid])
			high = mid - 1;
	}
	return (-1);
}
