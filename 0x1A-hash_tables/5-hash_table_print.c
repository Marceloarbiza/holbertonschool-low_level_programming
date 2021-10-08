#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				printf("%s\n", ht->array[i]->value);
		}
}
