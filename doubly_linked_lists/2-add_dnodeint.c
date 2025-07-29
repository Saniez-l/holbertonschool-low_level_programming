#include "lists.h"

/**
 * add_dnodeint - insert element of list doubel chained
 *
 * @head: header element
 * @n: number
 * Return: new.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
