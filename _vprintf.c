#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _vprintf - the function that determines the format specifier to be used
 * and also prints the outcome when called.
 * @format: the parameter that holds the format specifier
 * @list: the parameter that contains the list of arguments to be printed
 */

void _vprintf(const char *format, va_list list)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				putchar(*format);
			}
		}
		else if (state == 1)
		{
			format_specifier(format, list);
			state = 0;
		}
		format++;
	}
}
