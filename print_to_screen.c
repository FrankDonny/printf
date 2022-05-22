#include "main.h"
/**
 * get_string - this funtion outputs strings to standard output
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: output of s on success, (null) otherwise
 */

int get_string(va_list list, raise_flag *format)
{
	char *s = va_arg(list, char *);

	(void)format;

	if (!s)
	s = "(null)";
	return (_puts(s));
}

/**
 * get_char - this funtion outputs characters to standard output
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: 1 on success
 */

int get_char(va_list list, raise_flag *format)
{
	(void)format;
	_putchar(va_arg(list, int));
	return (1);
}
