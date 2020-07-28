#include "lists.h"
/**
 * get_nodeint_at_index -  nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: index of the node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *aux = head;

	while (aux != NULL && c < index)
	{
		aux = aux->next;
		c++;
	}
	return (aux);
}
