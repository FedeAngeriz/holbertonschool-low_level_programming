#include "lists.h"

/**
 * sum_dlistint - suma de todos los datos de una lista
 * @head: puntero a nodo actual
 * Return: suma de todos los nodos
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int contador = 0;

	while (head != NULL)
	{
		contador += head->n;
		head = head->next;
	}
	return (contador);
}
