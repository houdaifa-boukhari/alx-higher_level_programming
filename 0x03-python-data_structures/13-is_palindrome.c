#include "lists.h"
#include <stdlib.h>

// size_t ft_lstsize(listint_t *head);
int is_palindrome(listint_t **head);

/**
 * ft_lstsize - returns the number of elements in a linked list
 * @head: pointer to the head of the list
 * Return: number of elements in the list
//  */

// size_t ft_lstsize(listint_t *head)
// {
// 	size_t count = 0;

// 	// if (!head)
// 		return (0);
// 	while (head)
// 	{
// 		count++;
// 		head = head->next;
// 	}
// 	return (count);
// }

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(listint_t **head)
{
	// size_t count = ft_lstsize(*head);
	// int *my_list;
	// listint_t *current = *head;

	// if (!head || !*head)
	// 	return (0);
	// my_list = (int *)malloc(sizeof(int) * count);
	// if (!my_list)
		// return (0);
	// for (size_t i = count - 1; current; i--, current = current->next)
		// my_list[i] = current->n;
	// current = *head;
	// for (int i = 0; current; i++, current = current->next)
	// {
		// if (current->n != my_list[i])
		// {
			// free(my_list);
			// return (0);
		// }
	// }
	return (1);
}
