#include "lists.h"

/**
 * delete_dnodeint_at_index - add nod in index idx
 *
 * @head: header element
 * @index: valu for insert
 *
 * Return: tmp.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;
	dlistint_t *prev_nod;
	dlistint_t *next_nod;

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;

		free(tmp);
		return (1);

	}
	while (count < index)
	{
		tmp = tmp->next;
		count++;
	}
	if (!tmp)
		return (-1);

	prev_nod = tmp->prev;
	next_nod = tmp->next;

	if (prev_nod)
	{
		prev_nod->next = next_nod;
	}

	if (next_nod)
	{
		next_nod->prev = prev_nod;
	}

	free(tmp);
	return (1);
}
