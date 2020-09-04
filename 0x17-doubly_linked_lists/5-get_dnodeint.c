#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of linked list
 * @index: index to the node
 *
 * Return: node nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head && c < index)
	{
		head = head->next;
		c++;
	}
	return (head);
}
