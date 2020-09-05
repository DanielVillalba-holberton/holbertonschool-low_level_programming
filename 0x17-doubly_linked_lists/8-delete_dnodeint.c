#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: head of linked list
 * @index: index to the node to be deleted
 *
 * Return: 1 if works -1 if no
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *ind, *tmp = *head;

	if (tmp && (index == 0))
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (c + 1 == index)
		{
			ind = tmp->next;
			if (ind)
			{
				tmp->next = ind->next;
				if (ind->next)
				{
					ind->next->prev = tmp;
				}
				free(ind);
				return (1);
			}
		}
		tmp = tmp->next;
		c++;
	}
	return (-1);
}
