#include "hash_tables.h"

/**
 * hash_table_delete - print hash table
 *
 * @ht: array
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *node;

	if (!ht)
		exit(98);

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
