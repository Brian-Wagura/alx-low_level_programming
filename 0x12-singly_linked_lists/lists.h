#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

/**
 * struct list_s - Singly linked list
 * @str:
 * @len:
 * @next:
 *
 * Description - Singly linked list node
 * structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* MAIN_H */
