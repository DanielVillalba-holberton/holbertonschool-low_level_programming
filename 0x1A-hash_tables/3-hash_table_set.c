#include "hash_tables.h"
/**
 * create_node - adds a new hash node
 * @value: value associated with the key.
 * @key: key to be added
 * Return: NULL or new node created
 */
hash_node_t *create_node(const char *value, const char *key)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (NULL);
	newNode->value = strdup(value);
	newNode->key = strdup(key);

	if (newNode->key == NULL || newNode->value == NULL)
	{
		if (newNode->key)
			free(newNode->key);
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	return (newNode);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update
 * @key: key of the new element
 * @value: value associated with the key.
 * Return: 0 if fails or 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode = NULL, *temp = NULL, *node_n = NULL;

	if (strcmp(key, "") == 1)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];
	node_n = temp;
	if (node_n)
	{
		while (temp)
		{
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	newNode = create_node(value, key);
	if (newNode == NULL)
		return (0);

	newNode->next = node_n;
	ht->array[index] = newNode;
	return (1);
}
