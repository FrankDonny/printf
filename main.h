#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct flags
{
        int plus;
        int space;
        int hash;
	int negative;
	int zero;
} raise_flag;

typedef struct decide_func_formatSpec
{
        char d;
        int (*format)(va_list list, raise_flag *format);
} dff_spec;

int _printf(const char *format, ...);
int get_int(va_list list, raise_flag *format);
int unsigned_int(va_list list, raise_flag *format);
void get_number(int n);
int count_digit(int i);
int _address(va_list list, raise_flag *format);
char *num_bases(unsigned long int num, int base, int lowercase);
int _flags(char str, raise_flag *format);
int (*format_specifier(char s))(va_list, raise_flag *);
int get_char(va_list list, raise_flag *format);
int get_string(va_list list, raise_flag *format);
int _hex(va_list list, raise_flag *format);
int _hex_big(va_list list, raise_flag *format);
int _binary(va_list list, raise_flag *format);
int _octal(va_list list, raise_flag *format);
int str_rev(va_list list, raise_flag *format);
int _bigS(va_list list, raise_flag *format);
int _putchar(char c);
int _puts(char *str);
int _rot13(va_list list, raise_flag *format);
int _percent(va_list list, raise_flag *format);

#endif
