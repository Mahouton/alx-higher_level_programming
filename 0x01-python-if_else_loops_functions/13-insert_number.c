#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list
 * @head: points to the first node
 * @number: integer that will be inserted
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current, *old;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = number;
	old = NULL;
	current = *head;

	for (; current != NULL && current->n < number;)
	{
		old = current;
		current = current->next;
	}

	new_node->next = current;

	if (old != NULL)
		old->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
