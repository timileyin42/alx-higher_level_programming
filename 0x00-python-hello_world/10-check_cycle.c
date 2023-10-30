#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *walk;
	listint_t *run;

	walk = list;
	run = list;
	while (list && walk && walk->next)
	{
		list = list->next;
		walk = walk->next->next;

		if (list == walk)
		{
			list = run;
			run = walk;
			while (1)
			{
				walk = run;
				while (walk->next != list && walk->next != run)
				{
					walk = walk->next;
				}
				if (walk->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}
	return (0);
}
