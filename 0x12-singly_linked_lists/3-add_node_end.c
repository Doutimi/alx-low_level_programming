#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *active_node;
	size_t a;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for
		(a = 0;
		 str[a];
		 a++);

	new_node->len = a;
	new_node->next = NULL;
	active_node = *head;

	if (active_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (active_node->next != NULL)
			active_node = active_node->next;
		active_node->next = new_node;
	}

	return (*head);
}
