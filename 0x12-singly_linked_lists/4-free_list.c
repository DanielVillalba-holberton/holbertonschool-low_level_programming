#include "lists.h"
/**
 * free_list - free a list
 * @head: node head
 * Return: nothing void.
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
