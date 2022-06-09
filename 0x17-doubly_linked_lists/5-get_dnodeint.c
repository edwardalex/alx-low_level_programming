#include "lists.h"
/**
 * get_dnodeint_at_index - get the index node
 * @head: head of the list
 * @index: index to get
 *
 * Return: addres of the index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int observer = 0;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL && observer != index)
	{
		temp = temp->next;
		observer++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
