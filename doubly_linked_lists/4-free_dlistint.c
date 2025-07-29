#include "lists.h"

/**
 * free_dlistint - free list chained
 *
 * @head: header element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}


}
