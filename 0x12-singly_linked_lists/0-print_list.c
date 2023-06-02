#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
