#include "hash_tables.h"
/**
 * hash_table_delete - free a hash table
 * @ht: hash table
 * Return: Void nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int s, index = 0;
	hash_node_t *temp, *node;

	s = ht->size;
	if (ht->array && ht)
	{
		while (index < s)
		{
			node = ht->array[index];
			while (node)
			{
				temp = node->next;
				if (node->key)
				{
					free(node->key);
				}
				if (node->value)
					free(node->value);
				free(node);
				node = temp;
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
