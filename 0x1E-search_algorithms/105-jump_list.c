#include "search_algos.h"
/**
 * advance - advance steps on the linked list
 *
 * @list: pointer to the head of the list
 * @steps: steps to advance
 *
 * Return: pointer to the node
 */
listint_t *advance(listint_t *list, int steps)
{
	int count = 0;
	listint_t *temp = NULL;

	if (list == NULL)
		return (NULL);

	temp = list;

	while (count < steps && temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
/**
 * jump_list - searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @list: pointer to the first node of the linked list to search in
 * @size: the number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = NULL, *prev = NULL;

	if (list == NULL)
		return (NULL);

	temp = advance(list, sqrt(size));
	prev = list;

	while (temp != NULL && value > temp->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		prev = temp;
		temp = advance(temp, sqrt(size));
		if (temp->next == NULL)
			break;
	}
	printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
	prev->index, temp->index);

	while (prev->next != NULL && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	if (prev->n == value)
		return (prev);

	return (NULL);
}
