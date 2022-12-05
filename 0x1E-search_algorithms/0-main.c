#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/*
 * *
 *
 */

int main(void)
{
int array[] = {21,23,21,33,-1, 98};

size_t size = sizeof(array) / sizeof(array[0]);

printf("found %d at index: %d\n\n ",21,linear_search(array,size, 21));
return (0);	
}
