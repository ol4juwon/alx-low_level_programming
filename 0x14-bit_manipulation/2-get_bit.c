#include "main.h"

/**
 * get_bit - function
 * @n: int
 * @index: positon
 *
 * Return: int
 * descrioption: function to
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int count = 0;

if (n == 0 && index < 64)
return (0);

for (i = 0; i <= 63; n >>= 1, i++)
{
if (index == i)
{
return (n & 1);
}
}
return (-1);
}
