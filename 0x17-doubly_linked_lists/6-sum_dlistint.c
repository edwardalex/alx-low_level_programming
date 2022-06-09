#include "lists.h"
/**
 * sum_dlistint - sum every node data
 * @head: head of the list
 *
 * Return: the result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int result = 0;

	temp = head;

	if (head == NULL)
		return (result);

	while (temp != NULL)
	{
		result = result + temp->n;
		temp = temp->next;
	}

	return (result);
}
