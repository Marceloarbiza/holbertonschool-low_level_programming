#include "hash_tables.h"
/**
  * hash_table_create - in this function we are gonna create a hash table
  * @size: the size of the has table
  * Return: the has table created
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
		return (NULL);

	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	hashtable->size = size;

	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
