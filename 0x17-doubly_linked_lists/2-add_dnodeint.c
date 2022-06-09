#include "lists.h"
/**
 * add_dnodeint - add a new node at the beggining of the list
 * @head: head of the list
 * @n: data of the new node
 *
 * Return: addres of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	(*head)->prev = newNode;
	newNode->next = *head;
	(*head) = newNode;

	return (newNode);
}
