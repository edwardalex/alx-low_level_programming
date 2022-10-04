#include "search_algos.h"
/**
 * min - return the minimum value of two ints
 *
 * @a: first value
 * @b: second value
 *
 * Return: the minimum value
 */
int min(int a, int b)
{
	return ((a > b) ? b : a);
}
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[min(step, size) - 1] < value && step < size)
	{

		if (array[min(step, size - 1)] >= value)
			break;
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n",
	min(prev, size - 1), min(prev, size - 1) + (int)sqrt(size));

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev >= size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
