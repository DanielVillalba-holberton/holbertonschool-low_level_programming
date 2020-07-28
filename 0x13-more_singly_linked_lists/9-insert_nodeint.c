#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index of the new node
 * @n: number for n element of struct of linked list
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *aux = *head;

	new = malloc(sizeof(listint_t));

	if (head != NULL && new != NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			new->n = n;
			return (new);
		}
		for (i = 0; i < (idx - 1); i++)
		{
			if (aux->next == NULL && (i != (idx - 1)))
				return (NULL);

			aux = aux->next;
		}
		new->next = aux->next;
		new->n = n;
		aux->next = new;
		return (new);
	}
	if (new != NULL)
		free(new);

	return (NULL);
}
