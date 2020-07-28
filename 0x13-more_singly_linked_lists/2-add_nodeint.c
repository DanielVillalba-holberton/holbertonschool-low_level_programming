#include "lists.h"
/**
 * add_nodeint -  new node at the beginning of a linked list
 * @head: head of linked list
 * @n: data to that node
 * Return: addres of a new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->next = *head;
	*head = new;

	return (&*new);
}
