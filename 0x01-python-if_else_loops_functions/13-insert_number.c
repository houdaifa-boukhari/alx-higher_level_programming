#include "lists.h"

/**
 * buble_sort - Sorts a singly linked list using the bubble sort algorithm
 * @current: Pointer to the head of the linked list
 *
 * Return: Pointer to the head of the sorted linked list
 */

listint_t	*buble_sort(listint_t *current)
{
	int		tmp;
	listint_t	*next;
	listint_t	*head;

	head = current;
	if (!current)
		return (NULL);
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (current->n > next->n)
			{
				tmp = current->n;
				current->n = next->n;
				next->n = tmp;
			}
			next = next->next;
		}
		current = current->next;
	}
	return (head);
}

/**
 * insert_node - Inserts a number into a sorted singly linked list
 * @head: Double pointer to the head of the linked list
 * @number: The number to insert into the linked list
 *
 * Return: Pointer to the head of the linked list
 */

listint_t *insert_node(listint_t **head, int number)
{
	if (!head)
		return (NULL);
	head = add_nodeint_end(head, number);
	head = buble_sort(*head);
	return (head);
}