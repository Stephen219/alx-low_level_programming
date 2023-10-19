#include "lists.h"

/**
 * add_node_end - the function that adds the node at the end
 * @head: the head of the list_k
 * @str: the string that was addded
 * Return: the final structu
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	 new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
