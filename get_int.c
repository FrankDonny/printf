#include "main.h"

/**
 * get_int - this funtion outputs integers to standard output
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: cd on success
 */

int get_int(va_list list, raise_flag *format)
{
	int n = va_arg(list, int);
	int cd = count_digit(n);

	if (format->space == 1 && format->plus == 0 && n >= 0)
		cd += _putchar(' ');
	if (format->plus == 1 && n >= 0)
		cd += _putchar('+');
	if (format->zero == 1 && format->plus == 0 && n >= 0)
		cd += _putchar('0');
	if (format->negative == 1 && n < 0)
		cd += _putchar('-');
	if (n <= 0)
		cd++;
	get_number(n);
	return (cd);
}

/**
 * count_digit - this funtion counts number of integers
 * @i: the parameter that holds the integer to count
 * Return: d, number of characters
 */

int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
