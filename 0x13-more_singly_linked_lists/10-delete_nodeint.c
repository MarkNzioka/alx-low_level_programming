#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @index: index of the node that should be deleted
 * @head: pointer to the pointer to the head
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp, *delete_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}
	delete_node = current->next;
	if (delete_node == NULL)
		return (-1);
	current->next = delete_node->next;
	free(delete_node);
	return (1);
}
