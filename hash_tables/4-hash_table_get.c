#include "hash_tables.h"

/**
 * hash_table_get - retrieve value with key
 *
 * @key: key
 * @ht: array
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
	return (NULL);


	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (node->key == key)
			return (node->value);

		node = node->next;
	}

	return (NULL);

}
