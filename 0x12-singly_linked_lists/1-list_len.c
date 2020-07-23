#include "lists.h"
/**
 * list_len - prints numbers of elements of a node
 * @h: node
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
