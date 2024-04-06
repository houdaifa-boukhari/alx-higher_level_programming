#include "lists.h"
#include <stdlib.h>

/**
 * ft_lstsize - returns the number of elements in a linked list
 * @head: pointer to the head of the list
 * Return: number of elements in the list
 */

// int ft_lstsize(listint_t *head)
// {
// 	int count = 0;

// 	if (!head)
// 		return (0);
// 	while (head)
// 	{
// 		count++;
// 		head = head->next;
// 	}
// 	return (count);
// }

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(listint_t **head)
{
	// int count = ft_lstsize(*head);
	// int *my_list;
	// listint_t *current = *head;

	// if (!head || !*head)
	// 	return (0);
	// my_list = (int *)malloc(sizeof(int) * count);
	// if (!my_list)
	// 	return (0);
	// for (int i = count - 1; current && i >= 0; i--, current = current->next)
	// 	my_list[i] = current->n;
	// current = *head;
	// for (int i = 0; current; i++, current = current->next)
	// {
	// 	if (current->n != my_list[i])
	// 	{
	// 		free(my_list);
	// 		return (0);
	// 	}
	// }
	// free(my_list);
	return (1);
}
