#include "hash_tables.h"
/**
  * hash_table_create - in this function we are gonna create a hash table
  * @size: the size of the has table
  * Return: the has table created
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;

	if (size < 1)
	{
		return (NULL);
	}

	hashtable = malloc(sizeof(hash_table_t) * size);

	if (hashtable == NULL)
	{
		return (NULL);
	}

	return (hashtable);
}
