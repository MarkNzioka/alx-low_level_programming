#include"lists.h"
/**
 * get_nodeint_at_index - get the nth node of a listint_t list
 * @head: pointer to the head
 * @index: index to look for
 * Return:  nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
