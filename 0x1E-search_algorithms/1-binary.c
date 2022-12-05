#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - search a sorted array
 * @array:  array pointer to search
 * @size: size of array
 * @value: item to search
 * Return: -1 if not found;
 */
int binary_search(int *array, size_t size, int value)
{
size_t index;
if (array == NULL)
return (-1);
}
