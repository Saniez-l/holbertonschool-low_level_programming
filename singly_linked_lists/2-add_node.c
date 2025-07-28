#include "lists.h"
#include<string.h>

/**
 * add_node - insert element of list chained
 *
 * @head: header element
 * @str: string
 * Return: new.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}


	new->next = *head;
	new->len = _strlen(str);
	new->str = strdup(str);
	*head = new;
	return (new);

}
