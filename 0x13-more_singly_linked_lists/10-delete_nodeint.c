#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;


	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	temp = current->next;
	if (temp == NULL)
	{
		return (-1);
	}
	current->next = temp->next;
	free(temp);
	return (1);
}

