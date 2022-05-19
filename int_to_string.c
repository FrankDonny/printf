#include "main.h"
#include <stdio.h>

/**
 * un_int_to_str - converts input to number bases
 * only for unsigned integers
 * @figure: the parameter that contains the number
 * to be converted to a base number
 * @base: the parameter that holds the base the figure
 * will be converted to
 * @buffer: the parameter containing the size of of the
 * buf array
 */

void un_int_to_str(unsigned int figure, int base, char *buffer)
{
	int a;
	char buf[65];
	int cur = 0;

	if (figure == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}

	for (a = 0; a < 65; a++)
	{
		buf[a] = 0;
	}

	while (figure)
	{
		int digit = figure % base;

		if (digit >= 10)
		{
			buf[cur++] = 'a' + (digit - 10);
		}
		else
		{
			buf[cur++] = '0' + digit;
		}
		figure /= base;
	}

	for (a = cur - 1; a != 0; a--)
	{
		*buffer++ = buf[a];
	}
	*buffer++ = buf[0];
	*buffer = 0;
}

/**
 * hex_X - converts input specificaly to number base 16
 * uppercase
 * @figure: the parameter that contains the number
 * to be converted to a base number
 * @base: the parameter that holds the base the figure
 * will be converted to
 * @buffer: the parameter containing the size of of the
 * buf array
 */

void hex_X(unsigned int figure, int base, char *buffer)
{
	int a;
	char buf[65];
	int cur = 0;

	if (figure == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}

	for (a = 0; a < 65; a++)
	{
		buf[a] = 0;
	}

	while (figure)
	{
		int digit = figure % base;

		if (digit >= 10)
		{
			buf[cur++] = 'A' + (digit - 10);
		}
		else
		{
			buf[cur++] = '0' + digit;
		}
		figure /= base;
	}

	for (a = cur - 1; a != 0; a--)
	{
		*buffer++ = buf[a];
	}
	*buffer++ = buf[0];
	*buffer = 0;
}

/**
 * int_to_str - converts input to number bases
 * for signed integers
 * @figure: the parameter that contains the number
 * to be converted to a base number
 * @base: the parameter that holds the base the figure
 * will be converted to
 * @buffer: the parameter containing the size of of the
 * buf array
 */

void int_to_str(int figure, int base, char *buffer)
{
	if (figure < 0)
	{
		*buffer++ = '-';
		figure = -figure;
	}
	un_int_to_str(figure, base, buffer);
}
