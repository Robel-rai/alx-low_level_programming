#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 *
 * @head: head of linked list
 *
 * Return: the sum of all data and if the list is empty it 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head != NULL;)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
