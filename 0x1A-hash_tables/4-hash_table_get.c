#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *arrtmp = NULL;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	arrtmp = ht->array[idx];

	while (arrtmp)
	{
		if (strcmp(arrtmp->key, key) == 0)
			return (arrtmp->value);
		arrtmp = arrtmp->next;
	}

	return (NULL);
}
