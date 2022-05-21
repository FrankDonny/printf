#include "main.h"

/**
 * _printf - this function gives output and calls the format specifier
 * that to provide the correct outcome of a format specifier that was passed
 * @format: this parameter holds the format specifiers
 * Return: length of the output
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, raise_flag *);
	const char *ptr;
	va_list list;
	raise_flag flags = {0, 0, 0};

	register int ct = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
			return (-1);		
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
			{
				_putchar(*ptr++);
				continue;
			}
			while (_flags(*ptr, &flags))
				ptr++;
			pfunc = format_specifier(*ptr);
			ct += (pfunc) ? pfunc(list, &flags) : _printf("%%%c", *ptr);
		}
		else
			ct += _putchar(*ptr);
	}
	_putchar(-1);
	va_end(list);
	return (ct);
}
