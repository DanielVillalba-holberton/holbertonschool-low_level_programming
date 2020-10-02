#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of the array hash table
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashes_table;

	if (size == 0)
		return (NULL);

	hashes_table = calloc(1, sizeof(hash_table_t));
	if (hashes_table == NULL)
		return (NULL);

	hashes_table->array = calloc(size, sizeof(hash_node_t *));
	hashes_table->size = size;
	if (hashes_table == NULL)
	{
		free(hashes_table);
		return (NULL);
	}
	return (hashes_table);
}
