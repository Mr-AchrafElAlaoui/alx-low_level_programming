/*
 * delete_dnodeint_at_index.c - Deletes a node from a dlistint_t
 *                               at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Returns: Upon success - 1.
 *          Otherwise - -1.
 */

#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!*head)
		return -1;

	while (index && tmp)
	{
		tmp = tmp->next;
		index--;
	}

	if (!tmp)
		return -1;

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	kfree(tmp);
	return 1;
}
