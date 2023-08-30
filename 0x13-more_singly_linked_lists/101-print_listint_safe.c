#include"lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			head = NULL;
			exit(98);
		}
		count++;
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
