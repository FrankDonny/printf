#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

void un_int_to_str(unsigned int figure, int base, char *buffer);
void int_to_str(int figure, int base, char *buffer);
void _vprintf(const char *format, va_list list);
void *_printf(const char *format, ...);
void hex_X(unsigned int figure, int base, char *buffer);
void format_specifier(const char *format, va_list list);

#endif
