#include "hash_tables.h"
/**
 * create_node - function that creates a new node
 * @key: key
 * @value: valu
 * Return: new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t *));

	if (!new_node)
		return (NULL);

	new_node->key = (char *)malloc(strlen(key) + 1);

	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = (char *)malloc(strlen(value) + 1);

	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return (new_node);
}


/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash_table
 * @key: key
 * @value: valu
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;
	hash_node_t *arrtmp;
	char *value2;

	if (!ht || !ht->array || !value || ht->size == 0 || strlen(key) == 0)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	arrtmp = ht->array[idx];
	while (arrtmp)
	{
		if (strcmp(arrtmp->key, key) == 0)
		{
			value2 = (char *)malloc(strlen(value) + 1);
			if (!value2)
				return (0);
			free(arrtmp->value);
			strcpy(node->value, value2);
			return (1);
		}
		arrtmp = arrtmp->next;
	}
	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
