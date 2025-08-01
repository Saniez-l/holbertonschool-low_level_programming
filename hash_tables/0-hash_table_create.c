#include "hash_tables.h"

/**
 * hash_table_create - creation d une table de hash
 *
 * @size: size of array
 * Return: pointeur
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t) * size);
	if (table == NULL)
	{
		return (NULL);
	}
	return (table);
}
