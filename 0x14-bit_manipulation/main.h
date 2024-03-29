#ifndef _BIT_MANIPULATION_
#define _BIT_MANIPULATION_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);
int _strlen(const char *s);
unsigned int binary_to_uint(const char *binary);
void print_binary(unsigned long int n);
void recursiveDiv(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int countbit(unsigned int long a);
int get_endianness(void);

#endif
