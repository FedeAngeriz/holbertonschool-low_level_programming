#include "lists.h"

/**
 * print_list - Lista enlazadas
 * @h: puntero a siguiente nodo
 * Return: Todos los elementos de la lista
 */

size_t print_list(const list_t *h)
{
	size_t nodo1 = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodo1++;
		h = h->next;
	}
	return (nodo1);
}
