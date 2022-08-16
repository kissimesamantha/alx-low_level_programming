#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: pointer to the head of list
 * Return: the sum of all the data (n) of a linked list
 * or 0if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
