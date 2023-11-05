#include "lists.h"
/**
 * recurPalindrome - checks if singly linked list is palindrome
 * @left: pointer to head of singly linked list
 * @right: head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int recurPalindrome(listint_t **left, listint_t *right)
{
	int check;

	if (right == NULL)
		return (1);

	check = recurPalindrome(left, right->next);
	if (check == 0)
		return (0);

	check = (right->n == (*left)->n);

	*left = (*left)->next;

	return (check);
}

/**
 * is_palindrome - checks if singly linked list is palindrome
 * @head: pointer to head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	if (head == NULL)
		return (0);
	return (recurPalindrome(head, *head));
}

