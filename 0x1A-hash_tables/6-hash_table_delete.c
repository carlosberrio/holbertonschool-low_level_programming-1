#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *current;

	if (!ht)
		return;

	for ( ; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			current = node;
			node = node->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
