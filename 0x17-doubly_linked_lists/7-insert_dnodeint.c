#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of linked list
 * @idx: index where a node be insert
 * @n: data to be added
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *new, *tmp = *h;

	while (tmp && c < idx - 1)
	{
		tmp = tmp->next;
		c++;
	}
	if (tmp || (c == idx - 1 || idx == 0))
	{
		new = malloc(sizeof(dlistint_t));
		if (new)
		{
			new->n = n;
			if (idx == 0)
			{
				new->next = *h;
				if (new->next)
					new->next->prev = new;
				new->prev = NULL;
				*h = new;
			}
			else
			{
				new->next = tmp->next;
				new->prev = tmp;
				tmp->next = new;
				if (new->next)
					new->next->prev = new;
			}
				return (new);
		}
	}
	return (NULL);
}
