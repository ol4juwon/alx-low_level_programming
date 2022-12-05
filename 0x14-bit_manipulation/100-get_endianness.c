#include "main.h"

/**
 * get_endianness - function get little ot big endian
 *
 * Return: little or big endiann
 */

int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;

return ((int)*c);
}
