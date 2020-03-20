#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first element of the list
 * @str: string to be copied
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *tmp;
	unsigned int len = 0;

	while (str[len])
		len++;

/* Create a new struc or node */
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

/* New info to new node */
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

/* Check if head is null to assign a first node */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

/* Assign head to a new tmp var to iterate head and not overwrite head */
	tmp = *head;

/* then, iterate all the list to reach the tail to add the new node */
	while (tmp->next != NULL)
		tmp = tmp->next;

/* the tail is reached, so, assign the new element */

	tmp->next = new;

	return (new);
}
