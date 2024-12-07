#include "lists.h"

/**
 * add_dnodeint_end - crear nuevo nodo y colocarlo al final de la lista
 * @head: doble puntero que apunta al nodo actual
 * @n: variable que contiene el string
 * Return: nodo colocado al final de la lista
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNodo = malloc(sizeof(dlistint_t));
	dlistint_t *final = *head;

	if (newNodo == NULL)
		return (NULL);

	newNodo->n = n;
	newNodo->next = NULL;
	newNodo->prev = *head;

	if (*head == NULL)
	{
		*head = newNodo;
		return (newNodo);
	}

	while (final->next != NULL)
		final = final->next;

	final->next = newNodo;

	return (newNodo);

}
