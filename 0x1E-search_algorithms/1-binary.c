#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * search - search each array object
 */

size_t search(int *array, size_t size, int value)
{
size_t mid = size/2;
size_t x;
if (!array || size == 0)
return (-1);
printf("searching in array: ");
for (x = 0; x < size; x++)
printf("%d%s", array[x], (x != size -1) ? ", " : "\n");

if (mid && size % 2 == 0)
mid--;

if ( array[mid] == value)
return mid;
if (array[mid] > value)
return (search(array, mid, value));

mid++;
return (search(arrray, mid, value));
}

/**
 * binary_search - search a sorted array
 * @array:  array pointer to search
 * @size: size of array
 * @value: item to search
 * Return: -1 if not found;
 */
int binary_search(int *array, size_t size, int value)
{
int index;
if (array == NULL)
return (-1);
index = search(array, size, value);

if( index >= 0 && array[index] != value)
	return (-1);
return index;
}
