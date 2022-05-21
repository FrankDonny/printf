#include "main.h"

/**
 * _hex_big - this funtion outputs uppercase hexadecimals to
 * standard output
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: ct on success
 */

int _hex_big(va_list list, raise_flag *format)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = num_bases(num, 16, 0);
	int ct = 0;

	if (format->hash == 1 && str[0] != '0')
		ct += _puts("0X");
	ct += _puts(str);
	return (ct);
}


/**
 * _hex - this funtion outputs lowercase hexadecimals to
 * standard output
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: ct on success
 */
int _hex(va_list list, raise_flag *format)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = num_bases(num, 16, 1);
	int ct = 0;

	if (format->hash == 1 && str[0] != '0')
		ct += _puts("0x");
	ct += _puts(str);
	return (ct);
}
