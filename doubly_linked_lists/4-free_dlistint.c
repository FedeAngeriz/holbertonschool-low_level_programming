#include "lists.h"

/**
 * free_dlistint - libera memoria
 * @head: puntero al nodo actual
 * Return: liberacion de memoria
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *recorre;

	while (head != NULL)
	{
		recorre = head->next;
		free(head);
		head = recorre;
	}
}
