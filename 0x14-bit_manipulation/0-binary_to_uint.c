#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * binary_to_uint - converter
 * @binary:  string binary
 * return: uint
 */

unsigned int binary_to_uint(const char *binary)
{
unsigned int base = 0, length = 0, index = 0;
if (binary == NULL)
{
return (0);
}

length = strlen(binary);
for (; index < length; index++)
{
if (binary[length] != 48 && binary[length] != 49)
{
return (0);
}
if (binary[length] == 49)
{
index += 1 << base;
}
base++;
}
return (index);
}
