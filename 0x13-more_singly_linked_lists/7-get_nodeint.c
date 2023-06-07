#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to desired node
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t k;

	for (k = 0; (k < index) && (head->next); k++)
		head = head->next;

	if (k < index)
		return (NULL);

	return (head);
}
