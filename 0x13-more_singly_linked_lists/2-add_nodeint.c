#include "lists.h"

/**
 * add_nodeint - function that adds a node to the list
 * Return: the liked list
 * @head:  pointer to a pointer
 * @n: to be added
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	new->next = *head;
	*head = new;
	return (new);

}
