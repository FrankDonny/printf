#include "main.h"

/**
 * _address - this funtion prints address
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: ct on success
 */

int _address(va_list list, raise_flag *format)
{
	char *str;
	unsigned long int p = va_arg(list, unsigned long int);

	register int ct = 0;

	(void)format;

	if (!p)
		return (_puts("(nil)"));
	str = num_bases(p, 16, 1);
	ct += _puts("0x");
	ct += _puts(str);
	return (ct);
}
