#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list
 * @head: The pointer to head of doubly linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p, *q;

	for (p = head; p != NULL; p = q)
	{
		q = p->next;
		free(p);
	}
}
