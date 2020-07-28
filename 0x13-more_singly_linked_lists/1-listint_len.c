#include "lists.h"
/**
 * listint_len -  elements in a linked list
 * @h: head of linked list
 * Return: addres of a new element
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
