#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle int it
 * @list : pointer to the first node
 *
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	if (list == NULL || list->next == NULL)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	
		if (fast == slow)
			return (1);
	}

	return (0);
}
