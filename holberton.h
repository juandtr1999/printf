#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * struct ch_fmt - sees if the format matches
 * @c: the char of the format
 * @f: function to make
 */
typedef struct ch_fmt
{
	char c;
	int (*f)(va_list, char *, int);
} fmt_type;

int _printf(const char * const format, ...);

int find_m(const char * const fmt, va_list list, char *buff, int p, int *i);

int print_char(va_list a, char *buffer, int index);

int print_string(va_list a, char *buffer, int index);

int print_int(va_list a, char *buffer, int index);

int len_dig(long int num);

int print_u_int(va_list a, char *buffer, int index);

int len_u_dig(unsigned int num);

int print_binary(va_list a, char *buffer, int index);

int print_octal(va_list a, char *buffer, int index);

int print_x_hexal(va_list a, char *buffer, int index);

int print_X_hexal(va_list a, char *buffer, int index);

#endif
