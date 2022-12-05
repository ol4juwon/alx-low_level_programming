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
size_t index;
if (array == NULL)
return (-1);
for (index = 0; index <  size; index++)
{
printf("Value checked array[%lu] = [%d]\n",index, array[index]);
if (array[index] == value)
{
return (index);
}
}
return (-1);
}
