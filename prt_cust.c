#include "main.h"

/**
 * _bigS - prints non printable characters \x, followed by the ASCII code
 * @list: va_list arguments from _printf
 * @format: the parameter that points to the structure raise_F that raises
 * flags
 * Return: ct
 */
int _bigS(va_list list, raise_flag *format)
{
	int a, ct = 0;
	char *res;
	char *s = va_arg(list, char *);

	(void)format;
	if (!s)
		return (_puts("(null)"));

	for (a = 0; s[a]; a++)
	{
		if (s[a] > 0 && (s[a] < 32 || s[a] >= 127))
		{
			_puts("\\x");
			ct += 2;
			res = num_bases(s[a], 16, 0);
			if (!res[1])
				ct += _putchar('0');
			ct += _puts(res);
		}
		else
			ct += _putchar(s[a]);
	}
	return (ct);
}

/**
 * str_rev - this funtion that reverses strings
 * @list: the parameter that holds the arguments in va_list
 * @format: the parameter that points to the structure containing
 * the flags
 * Return: i, the lenght of string
 */
int str_rev(va_list list, raise_flag *format)
{
	int i = 0, j;
	char *s = va_arg(list, char *);

	(void)format;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
