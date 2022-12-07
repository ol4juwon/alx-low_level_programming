#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    new->next = *head;
    *head = new;

    return (new);
}
