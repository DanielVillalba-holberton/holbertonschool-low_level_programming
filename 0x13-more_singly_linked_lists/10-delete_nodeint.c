#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of the list
 * @index: number index
 *
 * Return: 1 if works or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *del = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		if (index == 0)
		{
			if (*head != NULL)
			{
				temp = (*head)->next; /*nodo temppral es igual a lo que apunte head*/
				free(*head);            /*limpio head*/
				*head = temp;           /*ahora head es el temporal*/
				return (1);
			}
			return (-1);
		}
		while (i < (index - 1))
		{
			/*si llega al ginal de la lista yno encuentra el indice*/
			if (temp->next == NULL && (i != (index - 1)))
				return (-1);

			/*va avanzando en la pila y temp toma el valor del puntero al siguiente*/
			temp = temp->next;
			i++;
		}
		/*nodo a eliminar toma el valor del apuntador donde*/
		/* termino el ciclo while mas una posicion*/
		del = temp->next;
		/*desvinculo el puntero al nodo a eliminar y lo actualizo*/
		/* al siguiente nodo del nodo a eliminar*/
		temp->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
