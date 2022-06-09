#include "lists.h"
/**
 * linkedListLen - looks for lenght of a linked list
 * @h: head of the linked list
 *
 * Return: lenght of the list
 */
unsigned int linkedListLen(dlistint_t *h)
{
	dlistint_t *temp = h;
	unsigned int len = 0;

	if (h == NULL)
		return (0);
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
/**
 * createNode - creates a new node
 * @n: new node data
 *
 * Return: new node
 */
dlistint_t *createNode(int n)
{
	dlistint_t *newNode = NULL;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode);
}
/**
 * insert_dnodeint_at_index - insert a new node at index
 * @h: head of the list
 * @idx: index to insert the new node
 * @n: data of the new node
 *
 * Return: addres of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *temp = *h;
	unsigned int listLen = linkedListLen(*h);

	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}
	if (idx > listLen)
		return (NULL);
	newNode = createNode(n);
	if (idx == listLen)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
		return (newNode);
	}
	listLen = 0;
	while (listLen != idx)
	{
		temp = temp->next;
		listLen++;
	}
	newNode->next = temp;
	newNode->prev = temp->prev;
	(temp->prev)->next = newNode;
	temp->prev = newNode;

	return (newNode);
}
