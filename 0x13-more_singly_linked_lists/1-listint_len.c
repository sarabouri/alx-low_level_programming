#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - function returns the number of nodes in a list.
 *
 * @h: parameter is pointer to first node.
 *
 * Return: returns the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
