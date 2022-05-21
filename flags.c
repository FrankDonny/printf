#include "main.h"

/**
 * _flags - this function shows a flag when printf
 * finds a flag modifier int the format string
 * @str: parameter that holds the flag specifier
 * @format: the parameter that points to the structure flags
 * Return: 1 if flags, 0 otherwise
 */

int _flags(char str, raise_flag *format)
{
	int i = 0;

	switch (str)
	{
		case '+':
			format->plus = 1;
			i = 1;
			break;
		case ' ':
			format->space = 1;
			i = 1;
			break;
		case '#':
			format->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
