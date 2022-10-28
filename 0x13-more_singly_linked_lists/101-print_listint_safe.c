#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
