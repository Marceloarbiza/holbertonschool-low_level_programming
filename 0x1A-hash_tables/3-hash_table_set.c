#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash_table
 * @key: key
 * @value: valu
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* border cases */
	if (!ht || ht->size == 0 || !ht->array || strlen(key) == 0 || !value)
	{
		return (0);
	}
	
	/* create new node by function */
	hash_node_t *node = create_node(key, value);
	
	
	return (1);	
}

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	/* create new node */
	new_node = malloc(sizeof(hash_node_t *));

	if (!new_node)
		return (NULL);

	new_node->key = (char *)malloc(strlen(key) + 1);

	if (!new_node->key)
	{
		free (new_node);
		return (NULL);
	}

	new_node->value = (char *)malloc(strlen(value) + 1);
	
	if (!new_node->value)
	{
		free (new_node->key);
		free (new_node);
		return (NULL);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	new_node->next = NULL;

	return (new_node);
}
