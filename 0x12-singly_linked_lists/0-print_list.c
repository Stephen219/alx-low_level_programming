#include "lists.h"

/**
 * print_list - this is the function that prints the list
 * Return: the num of nodes if succcessiful
 * @h: the pointer to the linked list
 */

size_t print_list(const list_t *h)
{
        size_t count = 0;


        while (h != NULL)
        {
                if (h->str == NULL)
                {
                        printf("[0] (nil)\n");
                }
                else
                {
                        printf("[%u] %s\n", h->len, h->str);
                }
                h = h->next;

                printf("%d %u\n",h->next, h->len);
                h = h->next;
                count++;
        }
        return (count);
}

