#include "lists.h"

/**
 * add_node - function that adds a node to the list
 * Return: the liked list
 * @head:  pointer to a pointer
 * @str: to be added
 */


listint_t *add_nodeint(listint_t **head, const int n);
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
