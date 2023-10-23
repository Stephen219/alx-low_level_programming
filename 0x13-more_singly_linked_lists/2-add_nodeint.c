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

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);

	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
