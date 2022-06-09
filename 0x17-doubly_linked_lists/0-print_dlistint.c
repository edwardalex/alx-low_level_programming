#include "lists.h"
/**
 * print_dlistint - print all elements of a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elementsNumber = 0;
	const dlistint_t *temp;

	temp = h;

	if (h == NULL)
		return (0);

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		elementsNumber++;
	}
	return (elementsNumber);
}
