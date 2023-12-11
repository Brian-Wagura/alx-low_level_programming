#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the nodeat a given position in a
 * listint_t linked list.
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *temp = NULL;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
