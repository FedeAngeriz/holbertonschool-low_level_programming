#include "lists.h"

/**
 * list_len - Lista cantidad de elementos
 * @h: puntero al nodo actual
 * Return: cantidad de elementos
 */

size_t list_len(const list_t *h)
{
	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}
	return (contador);
}
