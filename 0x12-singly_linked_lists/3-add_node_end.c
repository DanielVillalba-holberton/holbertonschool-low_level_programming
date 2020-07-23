#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node at the end at a alist
 * @head: node head
 * @str: string input name
 * Return: new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *aux;

	if (new == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	new->str = strdup(str);
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;

		aux->next = new;
	}
	return (new);
}
