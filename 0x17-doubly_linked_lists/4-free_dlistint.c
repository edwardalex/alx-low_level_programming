#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	temp = head;

	if (head == NULL)
		return;

	while (temp->next)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
