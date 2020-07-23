#include "lists.h"
#include <string.h>
/**
 * add_node - add a node at the start
 * @head: node head
 * @str: string input name
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;
	return (new);
}
