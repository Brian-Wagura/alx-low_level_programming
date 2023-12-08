#include <stddef.h>
#include "lists.h"

/**
 * list_len - Number of elements in a
 * linked list
 * @h: Pointer to list_t
 *
 * Return: Number of elements in a linked
 * list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
