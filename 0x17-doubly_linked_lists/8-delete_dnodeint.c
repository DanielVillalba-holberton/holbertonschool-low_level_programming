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
	dlistint_t *bef, *tmp = *head, *aft;

	if (head == NULL || *head == NULL)
	return (-1);
	if (index == 0)
	{
	tmp = (*head)->next;
	if (tmp)
		tmp->prev = NULL;
	free(*head);
	*head = tmp;
	return (1);
	}
	while (tmp && c < index - 1)
	{
	tmp = tmp->next;
	c++;
	}
	if (tmp == NULL || tmp->next == NULL)
	return (-1);
	aft = tmp->next->next;
	bef = tmp;
	free(tmp->next);
	if (aft)
	{
	aft->prev = bef;
	}
	bef->next = aft;
	return (1);
}
