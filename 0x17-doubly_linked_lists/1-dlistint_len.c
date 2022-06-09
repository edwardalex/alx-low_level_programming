#include "lists.h"
/**
 * dlistint_len - print number of elements of a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elementsNumber = 0;
	const dlistint_t *temp;

	temp = h;

	if (h == NULL)
		return (0);

	while (temp)
	{
		temp = temp->next;
		elementsNumber++;
	}
	return (elementsNumber);
}
