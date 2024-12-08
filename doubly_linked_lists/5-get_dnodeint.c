#include "lists.h"

/**
 * get_dnodeint_at_index - agregar nodo en posicion especifica
 * @head: puntero  a nodo actual
 * @index: variable para posicion de nodo
 * Return: posicion de nodo especifica
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int contador = 0;

	while (head != NULL)
	{
		if (contador == index)
			return (head);
	head = head->next;
	contador++;
	}
	return (head);
}
