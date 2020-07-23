#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints content of nodes of a list.
 * @h: node
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		c++;
		h = h->next;
	}
	return (c);
}
