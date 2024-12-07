#include "lists.h"

/**
 * add_dnodeint - crear un nuevo nodo al principio de la lista
 * @head: el nodo del principio de la lista
 * @n: string del nodo
 * Return: crear nuevo nodo y agregarlo al principio de la lista
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNodo = malloc(sizeof(dlistint_t));

	if (newNodo == NULL)
		return (NULL);

	newNodo->n = n;
	newNodo->prev = NULL;
	newNodo->next = *head;

	if (*head != NULL)
		(*head)->prev = newNodo;

	*head = newNodo;

	return (newNodo);
}
