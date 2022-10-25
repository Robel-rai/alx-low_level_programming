#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at the end of a listint_t list
 *
 * @head: pointer to the linked list's head.
 * @n: integer
 *
 * Return: the add of the new element,or null if not correct.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	(*new).n = n;
	(*new).next = NULL;
	for (; old != NULL && (*old).next != NULL;)
		old = (*old).next;
	if (old == NULL)
	{
	*head = new;
	}
	else
	{
		(*old).next = new;
	}
	return (new);
}
