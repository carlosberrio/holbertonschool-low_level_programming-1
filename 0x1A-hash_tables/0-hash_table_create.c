#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: pointer to the newly created hash table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hstb;

	if (!size)
		return (NULL);

	hstb = malloc(sizeof(hash_table_t));

	if (!hstb)
		return (NULL);

	hstb->size = size;
	hstb->array = calloc(size, sizeof(hash_node_t *));

	if (!hstb->array)
	{
		free(hstb);
		return (NULL);
	}

	return (hstb);
}
