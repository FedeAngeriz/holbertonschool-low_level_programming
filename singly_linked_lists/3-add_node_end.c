#include "lists.h"

/**
 * add_node_end - agrega nodo al final de la lista
 * @head: doble puntero que apunta al inicio de la lista
 * @str: string que sera guardado en el nuevo nodo
 * Return: agrega el nuevo nodo creado al final de la lista
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNodo = malloc(sizeof(list_t));
	list_t *final = *head;
	unsigned int largo = 0;

	if (newNodo == NULL)
		return (NULL);

	newNodo->str = strdup(str);
	if (newNodo->str == NULL)
	{
		free(newNodo);
		return (NULL);
	}

	while (newNodo->str[largo] != '\0')
		largo++;
	newNodo->len = largo;
	newNodo->next = NULL;

	if (*head == NULL)
	{
		*head = newNodo;
		return (newNodo);
	}

	while (final->next != NULL)
		final = final->next;

	final->next = newNodo;

	return (newNodo);
}
