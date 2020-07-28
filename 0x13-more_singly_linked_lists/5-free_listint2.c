#include "lists.h"
/**
 * free_listint2 -  frees a linked list
 * @head: head of linked list
 * Return: nothing void
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		while (*head)
		{
			head = &(*head)->next;
			free(*head);
			*head = NULL;
		}
	}
}
