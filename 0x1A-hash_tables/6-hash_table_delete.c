#include "hash_tables.h"
/**
 * hash_table_delete - free a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *arrtmp = NULL;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				while (ht->array[i])
				{
					arrtmp = ht->array[i]->next;
					free(ht->array[i]->key);
					free(ht->array[i]->value);
					free(ht->array[i]);
					ht->array[i] = arrtmp;
				}
				free(ht->array[i]);
			}
		}
		free(ht->array);
		free(ht);
	}
}
