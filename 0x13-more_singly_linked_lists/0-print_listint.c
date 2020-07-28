#include "lists.h"
/**
 * print_listint -  prints elements of a linked list
 * @h: head of linked list
 * Return: numbers of elements
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
