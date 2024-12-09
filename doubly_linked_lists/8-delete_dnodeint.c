#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *recorre = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = recorre->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(recorre);
		return (1);
	}

	for (i = 0; recorre != NULL && i < index; i++)
		recorre = recorre->next;

	if (recorre == NULL)
		return (-1);
	if (recorre->prev != NULL)
		recorre->next->prev = recorre->prev;
	free(recorre);
	return (1);
}
