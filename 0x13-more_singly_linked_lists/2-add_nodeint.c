#include "lists.h"

/**
 * add_node - function that adds a node to the list
 * Return: the liked list
 * @head:  pointer to a pointer
 * @str: to be added
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	new->next = *head;
	new->next = *head;
	*head = new;
	return (new);

}
