#include "hash_tables.h"
/**
 * key_index - function to gives the index of a key
 * @key: data key
 * @size: size of the array of hashes
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key)) % size;
	return (index);
}
