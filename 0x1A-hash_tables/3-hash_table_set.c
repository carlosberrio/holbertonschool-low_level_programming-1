#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add or update the key/value to.
 * @key: the node key. Key can not be an empty string.
 * @value: value associated with the key. value must be duplicated.
 * Value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *head = NULL;
	unsigned long int index = 0;

	if (!ht || !ht->array || !ht->size || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}


/**
 * create_node - Creates an element for the hash table
 * @key: the node key. Key can not be an empty string.
 * @value: value associated with the key. value must be duplicated.
 * Value can be an empty string
 *
 * Return: pointer to the new node, or NULL if failed
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
