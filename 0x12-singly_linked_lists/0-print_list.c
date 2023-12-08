#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of
 * a list_t list.
 * @h: Pointer of type list_h
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	printf("[");
	while (h != NULL)
	{
		printf("%s", h->str);
		count++;
		h = h->next;
		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");
	return (count);
}
