#include "lists.h"

/**
 * list_len - print element of list chained
 *
 * @h: header element
 * Return: i.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	const list_t *nod = malloc(sizeof(list_t));



	for (nod = h; nod != NULL; nod = nod->next)
	{
		i++;
	}
	return (i);

}
