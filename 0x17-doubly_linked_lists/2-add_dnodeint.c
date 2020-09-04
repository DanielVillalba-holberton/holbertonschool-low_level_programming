#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of a double linked list
 * @head: head of the linked list
 * @n: new element to be inserted
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
