#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to be printed
 * Return: Nothing (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	char *aux_sep = "";
	hash_node_t *temp = NULL;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				temp = ht->array[index];

				while (temp)
				{
					printf("%s", aux_sep);
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					aux_sep = ", ";
				}
			}
		}
		printf("}\n");
	}
}
