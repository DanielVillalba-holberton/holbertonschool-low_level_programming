#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: the value associated with the key or NULL if not found the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array == NULL || (ht->array)[index] == NULL)
		return (NULL);

	node = (ht->array)[index];

	while (strcmp(node->key, key))
		node = node->next;

	if (node)
		return (node->value);
	else
		return (NULL);
}
