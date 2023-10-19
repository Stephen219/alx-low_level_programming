#include "lists.h"
/**
 * list_len - the length of the list
 * Return: the size of the list
 * @h: pointer to the head of the structure linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		 h = h->next;
		 count++;
	}
	return (count);
}
