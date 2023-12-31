#include"lists.h"
/**
 * list_len - lists number of elements in a linked list_t list
 * @h: pointer to the head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
