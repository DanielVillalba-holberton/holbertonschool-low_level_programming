#include "lists.h"
/**
 * add_nodeint_end -  and a node at the end of a linked list
 * @head: head of linked list
 * @n: data to that node
 * Return: addres of a new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (&*new);
}
