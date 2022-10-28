#include "lists.h"

/**
 * listint_len - a function that returns the number
 * @h: input of elements in a linked listint_t list
 * Return: 0
 */

size_t listint_len(const listint_t *h)

{

	int len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)

	{

		len++;

		h = h->next;

	}

	return (len);
}
