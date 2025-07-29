#include "lists.h"

/**
 * insert_dnodeint_at_index - add nod in index idx
 *
 * @h: header element
 * @idx: valu for insert
 * @n: number
 *
 * Return: new.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;


	if (idx == 0)
	{
		*h = new;
	}

	else
	{
		tmp = *h;
		while (tmp != NULL && count < idx - 1)
		{
			tmp = tmp->next;
			count++;
		}
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	}

	return (new);
}
