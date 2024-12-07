#include "lists.h"

/**
 * print_dlistint - imprimir todos los elementos de la lista
 * @h: puntero que apunta al nodo actual
 * Return: todos los elementos de la lista
 */

size_t print_dlistint(const dlistint_t *h)
{
	int contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		contador++;
		h = h->next;
	}
	return (contador);
}
