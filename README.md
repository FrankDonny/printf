# Authors: Frank Donny and Kelvin Mwanzia
This repository contains a C function that acts
similar to the standard C printf function.
This project required us to create our
own _printf which is an equivalent to the normal standard printf.


#Prototypes Used
int _printf(const char *format, ...)
int get_int(va_list list, raise_flag *format)
int unsigned_int(va_list list, raise_flag *format)
void get_number(int n)
int count_digit(int i)
int _address(va_list list, raise_flag *format)
char *num_bases(unsigned long int num, int base, int lowercase)
int _flags(char str, raise_flag *format)
int (*format_specifier(char s))(va_list, raise_flag *)
int get_char(va_list list, raise_flag *format)
int get_string(va_list list, raise_flag *format)
int _hex(va_list list, raise_flag *format)
int _hex_big(va_list list, raise_flag *format)
int _binary(va_list list, raise_flag *format)
int _octal(va_list list, raise_flag *format)
int str_rev(va_list list, raise_flag *format)
int _bigS(va_list list, raise_flag *format)
int _putchar(char c)
int _puts(char *str)
int _rot13(va_list list, raise_flag *format)
int _percent(va_list list, raise_flag *format)
