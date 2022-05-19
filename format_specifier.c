#include "main.h"
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * format_specifier - chooses the right format specifier for the printf
 * @format: the parameter that holds the format specifier
 * @list: the parameter that contains the list of arguments to be printed
 */
void format_specifier(const char *format, va_list list)
{
	char buf[32];
	int i;
	/*char ch = va_arg(list, int);*/

	switch (*format)
	{
		case 'c': {
			const char ch = va_arg(list, int);

			putchar(ch);
			break; }
		case 's': {
			const char *s = va_arg(list, const char *);

			while (*s)
			{
				putchar(*s++);
			}
			break; }
		case 'd': {
			const int num = va_arg(list, int);

			int_to_str(num, 10, buf);
			for (i = 0; buf[i]; i++)
			{
				putchar(buf[i]);
			}
			break; }
		case 'x': {
			const int num = va_arg(list, int);

			un_int_to_str(num, 16, buf);
			for (i = 0; buf[i]; i++)
			{
				putchar(buf[i]);
			}
			break; }
		case 'X': {
			const int num = va_arg(list, int);

			hex_X(num, 16, buf);
			for (i = 0; buf[i]; i++)
			{
				putchar(buf[i]);
			}
			break; }
		case 'p': {
			void *numb = va_arg(list, void *);

			putchar('0');
			putchar('x');
			un_int_to_str((uint64_t)numb, 16, buf);
			for (i = 0; buf[i]; i++)
			{
				putchar(buf[i]);
			}
			break; }
	}
}
