#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - function adds a new node at the beginning
 *
 * @head: pointer to address of first node
 *
 * @n: integer argument
 *
 * Return: the pointer new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (temp);
}
