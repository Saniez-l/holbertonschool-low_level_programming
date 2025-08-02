#include "hash_tables.h"

/**
 * key_index - creation d une table de hash
 *
 * @size: size of array
 * @key: key
 * Return: pointeur
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
