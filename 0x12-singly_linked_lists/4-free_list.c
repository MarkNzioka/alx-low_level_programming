#include"lists.h"
/**
 * free_list - free a list_t list
 * @head: pointer to the head of linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
