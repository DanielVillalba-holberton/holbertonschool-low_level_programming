#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: head of the linked list
 * @n: value to be add
 * Return: new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h_temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		h_temp = *head;
		while (h_temp->next)
			h_temp = h_temp->next;
		h_temp->next = new;
		new->prev = h_temp;
	}
	return (new);
}
