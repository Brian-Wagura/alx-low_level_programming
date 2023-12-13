#include <stdlib.h>
#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*h = NULL;
			break;
		}
		current = next;
	}

	*h = NULL;
	return (count);
}
