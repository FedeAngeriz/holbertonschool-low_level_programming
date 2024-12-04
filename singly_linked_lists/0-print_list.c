#include "lists.h"

/**
 * print_list - Lista enlazadas
 * @h: puntero a siguiente nodo
 * Return: Todos los elementos de la lista
 */

size_t print_list(const list_t *h)
{
	int contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		contador++;
		h = h->next;
	}
	return (contador);
}
