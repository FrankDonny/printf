#include "main.h"
#include <stdarg.h>
/**
 * _printf - the function that calls the _vprintf to print
 * formatted inputs
 * @format: the parameter that holds the inputs of data
 * to be printed
 * Return: a void pointer
 */
int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);
	_vprintf(format, list);
	va_end(list);
	return (0);
}
