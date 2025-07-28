#include "lists.h"

/**
 * print_list - print element of list chained
 *
 * @h: header element
 * Return: i.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *nod = malloc(sizeof(list_t));



	for (nod = h; nod != NULL; nod = nod->next)
	{
		if (nod->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nod->len, nod->str);
		}
		i++;
	}
	return (i);

}
