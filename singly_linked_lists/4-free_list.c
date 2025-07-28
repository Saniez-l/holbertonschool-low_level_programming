#include "lists.h"

void free_list(list_t *head)
{

	list_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		head = tmp->next;

		free(tmp);
	}

}
