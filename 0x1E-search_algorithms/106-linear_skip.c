#include "search_algos.h"
/**
 * skip_list_size - look for the size of a skiplist
 *
 * @list: pointer to the head of the skiplist
 *
 * Return: size of the skiplist
 */
int skip_list_size(skiplist_t *list)
{
	skiplist_t *temp = NULL;
	int count = 0;

	temp = list;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
/**
 * linear_skip - searches for a value in a sorted skip
 *               list of integers.
 *
 * @list: pointer to the head of the skip list to search in.
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located
 *         NULL otherwise.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *prev = NULL, *lastIndex = list;
	int size = skip_list_size(list);

	if (list == NULL)
		return (NULL);

	while (lastIndex->next != NULL)
		lastIndex = lastIndex->next;

	temp = list->express;
	prev = list;

	while (temp->n < value && temp != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		prev = temp;
		if (lastIndex->index < temp->index + sqrt(size))
		{
			temp = lastIndex;
			break;
		}
		temp = temp->express;
	}
	if (temp->index != lastIndex->index)
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
	prev->index, temp->index);

	while (prev != temp && prev != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	return (NULL);
}
