#include "main.h"

int print_r(va_list list, raise_flag *format)
{
	(void)list;
	if (format)
	{
		_putchar('%');
		_putchar('r');
	}
	return(1);	
}
