#include"lists.h"
/**
 * sum_listint - find  sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
