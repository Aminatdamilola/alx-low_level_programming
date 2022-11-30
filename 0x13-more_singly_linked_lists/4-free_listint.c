#include "lists.h"

/**
 * free_listint - free a linked lists
 * @head: head of a lists
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
