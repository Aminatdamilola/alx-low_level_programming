#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: doubly linked lists
 * Return: nothing, just free everything
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual = head;

	while (head)
	{
		actual = head;
		head = actual->next;
		free(actual);
	}
}
