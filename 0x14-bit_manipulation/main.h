#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int a, unsigned int N);
int set_bit(unsigned long int *a, unsigned int N);
int clear_bit(unsigned long int *a, unsigned int N);
unsigned int flip_bits(unsigned long int a, unsigned long int b);
int get_endianness(void);

#endif
