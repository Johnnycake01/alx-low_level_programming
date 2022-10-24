#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node's data n
 * @head: A pointer to listint_t structure.
 * Return: The head node's data from deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
