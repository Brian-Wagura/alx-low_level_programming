#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * list
 * @head: Pointer to a pointer to the head node of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: address of the new element(node), or NULL if it
 * failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
