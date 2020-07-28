#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: beginning of list
 * Return: pointer to first node of list (reversed)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *nextnode;

	while (head && *head)
	{
		nextnode = (*head)->next; /*nodo next al nodo que apunta el actual head*/
		(*head)->next = prev; /*el puntero head apunta ahora al contenido de prev*/
		prev = *head; /* nodo previo ahora es head*/
		*head = nextnode; /*head pasa a la siguiente psoicion*/
	}
	*head = prev; /*el ultimo pasa a ser head*/
	return (*head);
}
