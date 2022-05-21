#include "main.h"

/**
 * _binary - function that converts numbers to base 2 numbers
 * @list: - the parameter that holds the arguments from the
 * printf function
 * @format: parameter holds the poiinter that points to the
 * structure that raises flag
 * Return: the base 2 number
 */

int _binary(va_list list, raise_flag *format)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = num_bases(num, 2, 0);

	(void)format;
	return (_puts(str));
}

/**
 * _octal - function that converts numbers to base 8 numbers
 * @list: - the parameter that holds the arguments from the
 * printf function
 * @format: parameter holds the poiinter that points to the
 * structure that raises flag
 * Return: the base 8 number
 */
int _octal(va_list list, raise_flag *format)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = num_bases(num, 8, 0);
	int ct = 0;

	if (format->hash == 1 && str[0] != '0')
		ct += _putchar('0');
	ct += _puts(str);
	return (ct);
}
