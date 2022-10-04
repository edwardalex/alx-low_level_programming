#include "search_algos.h"
/**
 * binary_search_exp - searches for a value in an array of
 * integers using the binary search algorithm.
 *
 * @array:  pointer to the first element of the array to search in
 * @lo: lowest index of the array
 * @hi: highest index of the array
 * @value: value to search in the array
 *
 * Return: index of found value or -1
 */
int binary_search_exp(int *array, int lo, int hi, int value)
{
	int mid = hi + 1 / 2, i = 0;

	if (array == NULL)
		return (-1);

	while (array[lo] != array[hi])
	{
		mid = (lo + hi) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
		{
			if (i != hi)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			lo = mid + 1;
		if (value < array[mid])
			hi = mid - 1;
	}
	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		if (i != hi)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, intSize = size;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	while (bound < intSize && array[bound] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}


	if (bound < intSize)
	{
		printf("Value found between indexes [%d] and [%d]\n",
		bound / 2, bound);
		return (binary_search_exp(array, bound / 2, bound, value));
	}
	else
	{
		printf("Value found between indexes [%d] and [%d]\n",
		bound / 2, intSize - 1);
		return (binary_search_exp(array, bound / 2, intSize - 1, value));
	}
}
