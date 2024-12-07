#include "lists.h"

/**
 * dlistint_len - imprimir los numeros de elementos
 * @h: puntero que apunta al nodo actual
 * Return: cantidad de elementos de la lista
 */

size_t dlistint_len(const dlistint_t *h)
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
