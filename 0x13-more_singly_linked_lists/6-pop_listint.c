#include"lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer too pointer to the head
 * Return: he head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
