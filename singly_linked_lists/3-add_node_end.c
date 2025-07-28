#include "lists.h"
#include<string.h>

/**
 * _strlen - function strlen
 * @str: string
 * Return: len
 */
int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - insert element of list chained
 *
 * @head: header element
 * @str: string
 * Return: new.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	}

	return (new);
}
