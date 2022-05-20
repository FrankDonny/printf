#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
void _vprintf(const char *format, va_list list);
void un_int_to_str(unsigned int figure, int base, char *buffer);
void int_to_str(int figure, int base, char *buffer);
void hex_X(unsigned int figure, int base, char *buffer);
void format_specifier(const char *format, va_list list);
/*char *_strRev(char *str);*/

#endif
