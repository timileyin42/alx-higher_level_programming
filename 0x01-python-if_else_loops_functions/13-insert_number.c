#include "lists.h"

/**
 * insert_node - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @number: index of the list where the new node is
 * added.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_no;
	listint_t *h;
	listint_t *h_ptr;

	h = *head;
	new_no= malloc(sizeof(listint_t));

	if (!new_no)
		return (NULL);
	while (h != NULL)
	{
		if (h->n > number)
			break;
		h_ptr = h;
		h = h->next;
	}
	new_no->n = number;

	if (*head ==NULL)
	{
		new_no->next = NULL;
		*head = new_no;
	}
	else
	{
		new_no->next = h;
		if (h == *head)
			*head = new_no;
		else
			h_ptr->next = new_no;
	}
	return (new_no);
}
