#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i = 0, leng = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		leng++;
	}
	if (idx > leng)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		temp = *head;
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	i = 0;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
