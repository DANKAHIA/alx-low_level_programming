#include "lists.h"
/**
 * listint_len - returns the element in a linked list.
 * @h: head of a list.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
