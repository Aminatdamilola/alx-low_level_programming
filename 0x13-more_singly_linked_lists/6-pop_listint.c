#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list and return the head
 * @head: head of a list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;
	free(curr);

	*head = h;

	return (hnode);
}
