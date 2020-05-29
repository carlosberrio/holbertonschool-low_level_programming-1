#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 *
 * Return: If ht is NULL, it does not print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int print = 0;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");
	for ( ; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (print)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			print++;
		}
	}
	printf("}\n");
}
