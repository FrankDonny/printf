#include "main.h"
/**
 * format_specifier - this funtion chooses the rigth format specifier
 * for the printf
 * @s: holds the format specifier
 * Return: my_arr[i].format on success, NULL on failure
 */

int (*format_specifier(char s))(va_list, raise_flag *)
{
	dff_spec my_arr[] = {
		{'i', get_int},
		{'s', get_string},
		{'c', get_char},
		{'d', get_int},
		{'u', unsigned_int},
		{'x', _hex},
		{'X', _hex_big},
		{'b', _binary},
		{'o', _octal},
		{'R', _rot13},
		{'r', print_r},
		{'S', _bigS},
		{'p', _address},
		{'%', _percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (my_arr[i].d == s)
			return (my_arr[i].format);
	return (NULL);
}
