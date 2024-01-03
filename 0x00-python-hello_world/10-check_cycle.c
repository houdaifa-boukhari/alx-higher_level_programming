#include "lists.h"

/**
 * check_cycle - check if cycle or not
 * @list: pointer to head of list
 * Return: 1 is true or 0 is false
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;
	while (slow && fast)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
