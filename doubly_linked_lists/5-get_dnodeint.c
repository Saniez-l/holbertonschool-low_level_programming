#include "lists.h"

/**
 * get_dnodeint_at_index - return one element of linked chained
 *
 * @head: header element
 * @index: number for return
 * Return: tmp.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	while (count < index)
	{
		tmp = tmp->next;
		count++;
	}

	return (tmp);

}
