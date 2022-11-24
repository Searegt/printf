#ifndef M_H

#define M_H
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int print_binary_num(unsigned int n);
int print_octal_num(unsigned int n);
int replace_h(unsigned long int h, int is_upper);
int print_hex_num(unsigned long int n, int is_upper);
int print_unsigned_number(unsigned int n);
int print_number(int n);
int switch_f_and_print(char f, va_list ap);
int _printf(const char *format, ...);

#endif
