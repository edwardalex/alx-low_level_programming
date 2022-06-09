#include "lists.h"
/**
 * deleteNodeEnd - delete the last node
 * @head: head of the list
 *
 * Return: 1 on succes
 */
int deleteNodeEnd(dlistint_t **head)
{
	dlistint_t *temp = *head;

	while (temp->next)
		temp = temp->next;
	(temp->prev)->next = NULL;
	free(temp);
	return (1);
}
/**
 * deleteNode - delete the first node
 * @head: head of the list
 *
 * Return: 1 on succes
 */
int deleteNode(dlistint_t **head)
{
	dlistint_t *temp = *head;

	if (temp->next == NULL)
	{
		free(temp);
		return (1);
	}
	*head = temp->next;
	(temp->next)->prev = NULL;
	free(temp);
	return (1);
}
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on succes, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (len != index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		len++;
	}
	if (temp->prev == NULL)
		return (deleteNode(head));
	if (temp->next == NULL)
		return (deleteNodeEnd(head));

	(temp->next)->prev = temp->prev;
	(temp->prev)->next = temp->next;
	free(temp);
	return (1);
}
