#include"lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_temp, *prev = NULL;

	while (*head != NULL)
	{
		next_temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_temp;
	}
	*head = prev;
	return (*head);
}
