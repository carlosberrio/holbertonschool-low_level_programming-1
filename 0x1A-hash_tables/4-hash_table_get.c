#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table to add or update the key/value to
 * @key: the node key. Key can not be an empty string
 *
 * Return: value associated with the key, or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	struct hash_node_s *node = NULL;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node  = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
