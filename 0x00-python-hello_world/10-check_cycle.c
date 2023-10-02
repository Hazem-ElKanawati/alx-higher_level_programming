#include "lists.h"
/**
 * check_cycle - checks for cycle in a linked list
 * @list: head of the list
 * Return: 1 (detected a cycle) 0 (no cycle detected)
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	if (list == NULL)
		return(0);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
