#include "search_algos.h"

/**
 * linear_search - search for a vlaue in an array
 * @array: point to array to search
 * @size: size of array
 * @value: item to search
 * Return: -1 if not found or
 * index if found
 */

int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);
size_t index = 0;
for (index = 0; index <  size, index++)
{
if (array[index] == value)
{
return (index);
}
}
return (-1);
}
