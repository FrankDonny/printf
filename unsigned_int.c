#include "main.h"
#include <stdarg.h>

/**
 * unsigned_int - this funtion outputs unsigned integers to standard output
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: str printed on success
 */
int unsigned_int(va_list list, raise_flag *format)
{
	unsigned int u = va_arg(list, unsigned int);
	char *str = num_bases(u, 10, 0);

	(void)format;
	return (_puts(str));
}


/**
 * get_number - this funtion prints all digits
 * @n: int to be printed
 */
void get_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		get_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
