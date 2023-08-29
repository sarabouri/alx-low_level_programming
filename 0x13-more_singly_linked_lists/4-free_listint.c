#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - function frees a list.
 *
 * @head: pointer to first node
 *
 * Return: returns void
 */

void free_listint(listint_t *head)
{
listint_t *curent;
while (head != NULL)
{
curent = head;
head = head->next;
free(curent);
}
}
