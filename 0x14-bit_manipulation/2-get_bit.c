nclude "main.h"

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
if (n == NULL)
return (-1);
unsigned int count = 0;
while (n != 0)
{
if (count == index)
{
if (n % 2)
return (1);
else
return (0);
}
}
}
