#include "hash_tables.h"

/**
 * key_index - Generates the index of a key
 * @key: key string
 * @size: is the size of the array of the hash table
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);

	return (hash_djb2(key) % size);
}
