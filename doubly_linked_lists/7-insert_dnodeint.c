#include "lists.h"

/**
 * insert_dnodeint_at_index - colocar un nodo en una posicion especifica
 * @h: puntero doble a nodo actual
 * @idx: indice de posicion de nodo
 * @n: variable con informacion de nodo
 * Return: nodo agregado a la lista
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNodo = malloc(sizeof(dlistint_t));
	dlistint_t *recorre = *h;
	unsigned int contador;

	if (h == NULL)
		return (NULL);

	if (newNodo == NULL)
		return (NULL);

	newNodo->n = n;

	if (idx == 0)
	{
		newNodo->prev = NULL;
		newNodo->next = *h;

		if (*h != NULL)
			(*h)->prev = newNodo;
		*h = newNodo;
		return (newNodo);
	}

	for (contador = 0; contador < idx - 1 && recorre != NULL; contador++)
		recorre = recorre->next;

	if (recorre == NULL)
	{
		free(newNodo);
		return (NULL);
	}

	newNodo->prev = recorre;
	newNodo->next = recorre->next;
	recorre->next = newNodo;

	if (newNodo->next != NULL)
		newNodo->next->prev = newNodo;

	return (newNodo);
}
