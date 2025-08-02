#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: array
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht)
		exit(0);

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			printf("'%s' : '%s', ", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
