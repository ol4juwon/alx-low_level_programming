#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len- print length of list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
const list_t *current;
unsigned int n; /* number of nodes */

current = h;
n = 0;
while (current != NULL)
{
current = current->next;
n++;
}
return (n);
}
