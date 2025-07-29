#include "lists.h"

/**
 * sum_dlistint - return one element of linked chained
 *
 * @head: header element
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
