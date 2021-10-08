#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *arrtmp = NULL;
	unsigned long int i;
	unsigned long int flag = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				arrtmp = ht->array[i];

				while (arrtmp)
				{
					if (flag == 1)
						printf(", ");

					printf("'%s': '%s'", arrtmp->key, arrtmp->value);
					flag = 1;
					arrtmp = arrtmp->next;
				}
			}
			flag++;
		}
		printf("}\n");
	}
}
