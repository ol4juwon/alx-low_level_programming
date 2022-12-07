#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *current;
unsigned int n;

current = h;
n = 0;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[%d] (nil)\n", current->len);
current = current->next;
n++;
}
else
{
printf("[%d] %s\n", current->len, current->str);
current = current->next;
n++;
}
}
return (n);
}
