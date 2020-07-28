#include "lists.h"
/**
 * pop_listint -  deletes the head node of a linked list
 * @head: head of linked list
 * Return: data of the n node
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int value;

	if (head)
	{
		value = aux->n;
		*head = aux->next;
		free(aux);
	}
	else
		value = 0;

	return (value);
}
