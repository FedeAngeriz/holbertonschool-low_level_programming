#include "lists.h"

/**
 * free_list - libera memoria
 * @head: puntero que apunta al primer nodo
 * Return: libera la memoria de todos los nodos asignados
 */

void free_list(list_t *head)
{
	list_t *recorre;

	while (head != NULL)
	{
		recorre = head;
		head = head->next;
		free(recorre->str);
		free(recorre);
	}
}
