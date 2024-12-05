#include "lists.h"

/**
 * add_node - agrega un nuevo nodo al principio de la lista
 * @head: doble puntero que indica la cabeza de la lista
 * @str: puntero que contiene los datos de los string
 * Return: el nodo creado al inicio de la lista
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNodo = malloc(sizeof(list_t));
	unsigned int largo = 0;

	if (newNodo == NULL)
		return (NULL);

	newNodo->str = strdup(str);
	newNodo->next = *head;
	*head = newNodo;

	while (newNodo->str[largo] != '\0')
		largo++;
	newNodo->len = largo;

	if (newNodo->str == NULL)
	{
		free(newNodo);
		return (NULL);
	}
	return (newNodo);
}
